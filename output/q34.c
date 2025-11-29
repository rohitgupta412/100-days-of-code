#include<stdio.h>
int main()
{
    int n,prime;
    printf("enter any natural number n :");
    scanf("%d",&n);

    if(n%2==0){
    printf("not prime");
    }else{
    printf("prime");
    }
    return 0;
}