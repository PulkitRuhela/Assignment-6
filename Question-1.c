#include<stdio.h>

int main()
{
    int i, N, sum=0;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("\nSum of first %d natural Numbers is:  ",N);

    for(i=1 ; i<=N ; i++)
    {
        sum=sum+i;
    }
        printf("\n%d",sum);
    
    return 0;
}