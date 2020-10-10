Syntax Analysis

Workflow:
1.	Compile the script using Yacc tool. \
$ yacc -d parser.y 

2.	Compile the flex script using Flex tool. \
$ flex lexer.l 

3.	After compiling the lex file, lex.yy.c file is generated. Also, y.tab.c and y.tab.h files are generated after compiling the yacc script.  \ 

4.	Compilation is done with the options –ll, –ly and -w. \
$ gcc -o compiler lex.yy.c y.tab.h y.tab.c -ll -ly 

5.	The executable file is generated, which on running parses the C file given as a command line input. \
$ ./a.out test1.c
