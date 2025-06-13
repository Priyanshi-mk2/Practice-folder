#include<stdio.h>
//reverse of any positive integer
    void main()
    {
    int a,rev=0,n;
    printf("Enter a number a ",a);
    scanf("%d",&a);
    while(a>0)
    {
    n=a%10;
    rev=rev*10+n;
    a=a/10;
    }
    printf("The reverse of the number is %d",rev);
    }