#include<stdio.h>
int main()
{
    int n;
    long long factorial = 1;
    
    printf("enter a non negative integer :");
    scanf("%d",&n);

    if(n<0){
        printf("factorial is not defined\n");
    }else if(n==0){
        printf("factorial of 0 is 1 \n");
    }else{
        for(int i = 1; i<=n; i++){
            factorial *=i;
        }
        printf("factorial of %d is %lld.\n",n,factorial);
    }
        return 0;
    
}