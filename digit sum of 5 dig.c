#include<stdio.h>
//sum of digits of five digit number
    void main()
    {
    int a;
    printf("Enter a five digit no.",a);
    scanf("%d",&a);
    
    int sum = (a/10000)+(a/1000%10)+(a/100%10)+(a/10%10)+(a%10);
    printf("The sum of the digits is %d",sum);
    }