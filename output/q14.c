#include<stdio.h>
int main()
{
    char n;
    printf("enter a alphabet :");
    scanf("%c",&n);
    
    if( n =='a'||n =='e'||n=='i'||n=='o'||n=='u')
    {
        printf("n is a vowel\n");
    }
    else
    {
        printf("n is a constant\n");
    }
    
    return 0;
}