#include<stdio.h>
#include <conio.h>
int main()
{
    int n,i;
    unsigned long long factorial =1;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0)
       printf("Error !Factorial of a negative number doesnt exist.");
    else
    {
        for(i=1;i<=n;++i)
            factorial*=i;
    }
    printf("Factorial of %d = %llu\n",n,factorial);
    return 0;
}