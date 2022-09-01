#include<stdio.h>

int main()
{
    int i, N, f=1;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("\nFactorial of %d is:  ",N);

    for(i=1 ; i<=N ; i++)
    {
        f=f*i;
    }
        printf("\n%d",f);
    
    return 0;
}