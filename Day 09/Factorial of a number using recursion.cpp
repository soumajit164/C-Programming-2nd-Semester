#include<stdio.h>
int factorial(int);
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Factorial of %d is: %lld\n",num,factorial(num));
    return 0;
}
int factorial(int n)
{
    if (n==0||n==1)
    return 1;
    else
    return n*factorial(n-1);
}
