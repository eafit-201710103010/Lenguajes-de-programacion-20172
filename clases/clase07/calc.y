
%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define YYSTYPE int

// Declaration of errors 
int yylex();
int yyerror(char *s);

// Memoria
int memory = 0;
%}

%token NUMBER
%token PLUS MINUS TIMES DIVIDE POWER
%token LEFT RIGHT
%token STORE RECALL
%token END_LINE
%token END_OF_FILE

%left PLUS MINUS
%left TIMES DIVIDE
%right STORE

%start input
%%

input:
     | input line
     ;

line:
     END_LINE
     | END_OF_FILE         { exit(0); }
     | expression END_LINE { printf("= %d\n", $1); }
;

expression:
                expression PLUS expression   { $$=$1+$3; }
        |       expression MINUS expression  { $$=$1-$3; }
        |       expression TIMES expression  { $$=$1*$3; }
        |       expression DIVIDE expression { $$=$1/$3; }
        |       factor STORE                 { memory=$1;
                                               $$=memory; }
        |       factor { $$=$1; }
        ;

factor:
                LEFT expression RIGHT { $$=$2; }
        |       NUMBER { $$=$1; }
        |       RECALL { $$=memory; }
        ;
%%

int yyerror(char *s) {
  printf("%s\n", s);
}

int main() {
  if (yyparse())
    fprintf(stderr, "Calculator end.\n");
  else
    fprintf(stderr, "error found.\n");
}
