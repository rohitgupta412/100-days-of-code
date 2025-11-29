#include<stdio.h>
int main()
{
    int n,i;
    double sum=0.0;
    int numerator=2;
    int denominator=3;

    printf("enter the no of terms(n):");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        sum += (double)numerator/denominator;
        numerator =2*i;
        denominator =4*i-1;
    }
    printf("the sum of the series up to %d terms is: %lf\n",n,sum);
    return 0;
}