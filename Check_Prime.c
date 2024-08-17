//Write a program to check prime number
#include<stdio.h>

int main()
{
    int n, i, flag = 0;
    printf("Enter the a positive integer: ");
    scanf("%d",&n);

    //0&1 are not prime number.
    //change flag to 1 for non-prime number
    if(n == 0 || n == 1)
    flag = 1;

    for(i=2; i<=n/2; ++i)
    {
        //if n is divisiblr by i, then n is not prime 
        // change flag to 1 for non-prime number
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    //if flag is 0 then it is a prime number
    if(flag == 0)
    {
        printf("%d >> prime number",n);
    }
    else
    {
        printf("%d >> not a prime number",n);
    }
    return 0;
}