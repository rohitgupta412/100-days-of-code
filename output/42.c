#include<stdio.h>
int main()
{
    int number,i,sum=0;

    printf("enter a positive integer\n");
    scanf("%d",&number);

    if(number<=0){
        printf("please enter a positive integer.\n");
        return 1;
    }
    for(i=1;i<number;i++){
        if(number%i==0){
            sum +=i;
        }
    }
    if(sum==number){
        printf("%d is a perfect number.\n",number);
    }else{
        printf("%d is a not perfect number.\n",number);

    }
    return 0;
}