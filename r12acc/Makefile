CFLAGS=-std=c11 -g -static
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)

CFLAGS=-std=c11 -g -static
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)

r12acc: $(OBJS)
	$(CC) -o r12acc $(OBJS) $(LDFLAGS)

$(OBJS): r12acc.h

test: r12acc
	bash ./test.sh

clean:
	rm -f r12acc *.o *~ tmp*

.PHONY: test clean
