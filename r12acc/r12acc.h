//
// Parser
//

typedef enum {
  ND_ADD,       // +
  ND_SUB,       // -
  ND_MUL,       // *
  ND_DIV,       // /
  ND_ASSIGN,    // =
  ND_LVAR,      // Local variable
  ND_NUM,       // Integer
  ND_EQ,        // ==
  ND_NE,        // !=
  ND_LT,        // <
  ND_LE,        // <=
} NodeKind;

// AST node type
typedef struct Node Node;

struct Node {
  NodeKind kind; // Node kind
  Node *lhs;     // Left-hand side
  Node *rhs;     // Right-hand side
  int val;       // Used if kind == ND_NUM
  int offset;    // Used if kind == ND_LVAR
};

bool consume(char *op);

Node *expr();
Node *equality();
Node *relational();
Node *add();
Node *mul();
Node *unary();
Node *primary();

void expect(char *op);
int expect_number();

//
// Code generator
//

void gen(Node *node);

//
// Tokenizer
//
typedef enum {
  TK_RESERVED, // Keywords or punctuators
  TK_IDENT,    // Identifier
  TK_NUM,      // Integer literals
  TK_EOF,      // End-of-file markers
} TokenKind;

// Token type
typedef struct Token Token;

struct Token {
  TokenKind kind; // Token kind
  Token *next;    // Next token
  int val;        // If kind is TK_NUM, its value
  char *str;      // Token string
  int len;        // Token length
};

// Input program
char *user_input;

// Current token
Token *token;

void error(char *fmt, ...);
Token *consume_ident(void);
Token *tokenize();
bool at_eof();
