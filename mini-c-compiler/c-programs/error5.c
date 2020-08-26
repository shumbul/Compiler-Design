<<<<<<< HEAD:mini-c-compiler/c-programs/error5.c
/*In the second statement, myinteger is a data type, and the lexer should return myinteger as a datatype, not as an indentifier.*/
/*error i identifying the type of token*/
#include<stdio.h>
typedef int myinteger; 
myinteger x;
int main()
{
    x=1.543;
}
=======
/*In the second statement, myinteger is a data type, and the lexer should return myinteger as a datatype, not as an indentifier.*/
/*error i identifying the type of token*/
typedef int myinteger; 
myinteger x;
int main()
{
    x=1.543;
}
>>>>>>> 21e3918dc1174dd944344c1f172532ab18012149:c-programs/error5.c
