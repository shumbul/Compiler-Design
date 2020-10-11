//without error: do while loop
#include<stdio.h>
#include<conio.h>
int main()
{
	int num=1;	//initializing the variable
	do	//do-while loop 
	{
		printf("%d\n",2*num);
		num++;		//incrementing operation
	}while(num<=10);
	return 0;
}