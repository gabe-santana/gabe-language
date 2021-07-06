#include "include/lexer.h"

lexer_T* init_lexer(char* src)
{
    lexer_T* lexer = calloc(1, sizeof(struct LEXER_STRUCT));
    lexer->src = src;
    lexer->i = 0;
    lexer->c = src[lexer->i];

    return lexer;
}