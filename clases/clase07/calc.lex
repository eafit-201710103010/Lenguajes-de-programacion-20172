
%{
#define YYSTYPE int
#include "calcparser.h"
#include <stdlib.h>
%}
%option noyywrap

white [ \t]+
digit [0-9]
integer {digit}+
%%

{white} { }
{integer} { yylval=atoi(yytext);
            return NUMBER;
           }

"S" return STORE;
"R" return RECALL;
"+" return PLUS;
"-" return MINUS;
"*" return TIMES;
"/" return DIVIDE;
"^" return POWER;
"(" return LEFT;
")" return RIGHT;
"\n" return END_LINE;
<<EOF>> return END_OF_FILE;
