ARG0:=
ARG:=
IMAGE_NAME:=ccompiler
SRC:=9cc
BASE_PATH:=$(shell pwd)

.PHONY: help
help: ## help command
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-20s\033[0m %s\n", $$1, $$2}'

.PHONY: build
build: ## docker build
	docker build -t $(IMAGE_NAME) .

.PHONY: run
run: ## docker run
	docker run $(ARG0) --rm -v $(BASE_PATH)/$(SRC):/$(SRC) -w /$(SRC) $(IMAGE_NAME) $(ARG)

.PHONY: test
test: build ## make test on docker
	docker run --rm -v $(BASE_PATH)/$(SRC):/$(SRC) -w /$(SRC) $(IMAGE_NAME) make test
