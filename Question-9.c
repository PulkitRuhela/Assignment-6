#include<stdio.h>

int main()
{
    int a,b,i;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    for(i=1 ; i<=a*b ; i++)
    {
        if((i%a==0) && (i%b==0))
        {
            break;
        }
    }
    printf("\nLCM is: %d",i);
    return 0;
}