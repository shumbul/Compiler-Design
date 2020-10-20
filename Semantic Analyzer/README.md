## Semantic Analyzer

Steps to Compile & Run:
```shell
    1) flex scanner.l
    2) yacc -d parser.y
    3) gcc y.tab.c lex.yy.c -w
    4) ./a.out tests/test_number.c
```