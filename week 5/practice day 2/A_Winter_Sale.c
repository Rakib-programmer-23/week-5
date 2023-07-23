#include<stdio.h>
int main()
{
    float  x,p;//x is the percentage and p is the price after percentage //
    scanf("%f %f",&x,&p);
    float   price =  p / (1 - x/100);
    printf("%.2f", price );

    return 0;
}