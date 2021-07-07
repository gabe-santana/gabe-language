#ifndef GAB_TOKEN_H
#define GAB_TOKEN_H
typedef struct TOKEN_STRUCT 
{
    char* value;
    enum
    {
        TOKEN_ID,
        TOKEN_EQUALS,
        TOKEN_LPAREN,
        TOKEN_NPAREN,
        TOKEN_RBRACE,
        TOKEN_LBRACE,   
        TOKEN_COLON,
        TOKEN_COMMA,
        TOKEN_LT,
        TOKEN_GT,
        TOKEN_RIGHT_ARROW,
        TOKEN_INT,
        TOKEN_SEMI,
        TOKEN_EOF
    } type;
} token_T;

token_T* init_token(char* value, int type);
#endif

