<<<<<<< HEAD:mini-c-compiler/c-programs/fibonacci.c
#include<stdio.h>
#include <stdio.h>
 
void main()
{
    int fib1 = 0, fib2 = 1, fib3, num, count = 0;
 
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("First %d FIBONACCI numbers are ...\n", num);
    printf("%d\n", fib1);
    printf("%d\n", fib2);
    count = 2; /* fib1 and fib2 are already used */
    while (count < num)
    {
        fib3 = fib1 + fib2;
        count++;
        printf("%d\n", fib3);
        fib1 = fib2;
        fib2 = fib3;
   }
}
=======

 
void main()
{
    int fib1 = 0, fib2 = 1, fib3, num, count = 0;
 
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("First %d FIBONACCI numbers are ...\n", num);
    printf("%d\n", fib1);
    printf("%d\n", fib2);
    count = 2; /* fib1 and fib2 are already used */
    while (count < num)
    {
        fib3 = fib1 + fib2;
        count++;
        printf("%d\n", fib3);
        fib1 = fib2;
        fib2 = fib3;
   }
}
>>>>>>> 21e3918dc1174dd944344c1f172532ab18012149:c-programs/fibonacci.c
