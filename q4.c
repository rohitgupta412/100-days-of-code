#include<stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("enter length of rectangle:");
    scanf("%d",&length);
    printf("enter breadth of rectangle:");
    scanf("%d",&breadth);

    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("area=%d",area);
    printf("perimeter=%d",perimeter);
    return 0;

}