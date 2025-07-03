#ifndef _HUBA_H_
#define _HUBA_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

extern int   yylex();
extern char* yyfile;
extern FILE* yyin;
extern int   yylineno;
extern char* yytext;
extern int   yyparse();
extern void  yyerror(char *msg);

#endif  // _EVENTO_H_
