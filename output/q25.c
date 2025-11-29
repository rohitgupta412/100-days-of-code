#include<stdio.h>
int main()
{
    int a,b;
    char  operator;
    int result;

    printf("enter two numbers :");
    scanf("%d %d ,&a,&b");

    printf("enter any operator(+,-,*,/) :");
    scanf("%c",&operator);

    switch(operator){
        case '+':
        result = a + b;
        printf("result=%d\n",result);
        break;

        case '-':
        result = a - b;
        printf("result=%d\n",result);
        break;

        case '*':
        result = a * b;
        printf("result=%d\n",result);
        break;

        case '/':
        result = a / b;
        printf("result=%d\n",result);
        break;

        default:
        printf("enter neither number");
        break;
    }
    return 0;
}