/*In the second statement, myinteger is a data type, and the lexer should return myinteger as a datatype, not as an indentifier.*/
/*error i identifying the type of token*/
typedef int myinteger; 
myinteger x;
int main()
{
    x=1.543;
}
