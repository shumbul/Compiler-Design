<<<<<<< HEAD:mini-c-compiler/c-programs/test1.c
#include<stdio.h>
int f(int a)
{
	if(a==1)return 1;
	if(a==0)return 1;
	return f(a-1)+f(a-2);
}
void main()
{
	if(f(6) != 13)
		printf("FAIL\n");
	else
		printf("PASS\n");
}
=======

int f(int a)
{
	if(a==1)return 1;
	if(a==0)return 1;
	return f(a-1)+f(a-2);
}
void main()
{
	if(f(6) != 13)
		printf("FAIL\n");
	else
		printf("PASS\n");
}
>>>>>>> 21e3918dc1174dd944344c1f172532ab18012149:c-programs/test1.c
