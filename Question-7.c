#include<stdio.h>

int main()
{
    int  n, count=0;

    printf("Enter N: ");
    scanf("%d", &n);

    while(n!=0)
    {
        n=n/10;
        count++;

    }
    printf("\nThe number of digits are %d",count);

    return 0;

    
}