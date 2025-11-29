#include<stdio.h>

int main()
{
    float celsius,fahrenheit;
    printf("enter the temp in celsius :");
    scanf("%d",&celsius);
    
    fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f celsiusis equal to %.2f fahrenheit\n",celsius,fahrenheit);
    
    return 0;
}