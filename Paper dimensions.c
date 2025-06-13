#include<stdio.h>
 // dimensions for paper A0, A1,..,A5
     void main()
    {
    float a = 1189,b = 841;
    printf("The following dimensions are \n");
    printf("A0 = %f x %f\n",a,b);
    printf("A1 = %f x %f\n",a/2,b);
    printf("A2 = %f x %f\n",a/2,b/2);
    printf("A3 = %f x %f\n",a/4,b/2);
    printf("A4 = %f x %f\n",a/4,b/4);
    printf("A5 = %f x %f\n",a/8,b/4);
    }