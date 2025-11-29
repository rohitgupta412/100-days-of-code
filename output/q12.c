#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    
    if (n<=0)
    {
        if(n==0)
        {
            printf("n is zero\n");
        }
        else
        {
            printf("n is negative\n");
        }
    }    
        else
        {
            printf("n is positive\n");
        }
        return 0;
    }
