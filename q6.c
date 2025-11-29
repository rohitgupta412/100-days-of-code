#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("enter the first number :");
    scanf("%d",&num1);
    printf("enter the second number :");
    scanf("%d",&num2);
    
    printf("\nBefore swapping :\n");
    printf("first number = %d\n",num1);
    printf("second number = %d\n",num2);
    
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("\nAfter swapping swapping :\n");
    printf("first number = %d\n",num1);
    printf("second number = %d\n",num2);
    
    return 0;
}