#include <stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    
    printf("before swapping:a=%d\n b=%d",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("\n\nafter swapping:a=%d\n b=%d",a,b);
    return 0;
}