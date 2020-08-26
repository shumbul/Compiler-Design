<<<<<<< HEAD:mini-c-compiler/c-programs/gcd.c
/*
 * C Program to find GCD of given Numbers using Recursion
 */
#include <stdio.h>
 
int gcd(int, int);
 
int main()
{
    int a, b, result;
 
    printf("Enter the two numbers to find their GCD: ");
    scanf("%d%d", &a, &b);
    result = gcd(a, b);
    printf("The GCD of %d and %d is %d.\n", a, b, result);
}
 
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return gcd(a - b, b);
        }
        else
        {
            return gcd(a, b - a);
        }
    }
    return a;
}
=======
/*
 * C Program to find GCD of given Numbers using Recursion
 */

 
int gcd(int, int);
 
int main()
{
    int a, b, result;
 
    printf("Enter the two numbers to find their GCD: ");
    scanf("%d%d", &a, &b);
    result = gcd(a, b);
    printf("The GCD of %d and %d is %d.\n", a, b, result);
}
 
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return gcd(a - b, b);
        }
        else
        {
            return gcd(a, b - a);
        }
    }
    return a;
}
>>>>>>> 21e3918dc1174dd944344c1f172532ab18012149:c-programs/gcd.c
