#include <stdio.h>  
  
int main()  
{  
    double num;
    
    printf("Enter a number: ");
    scanf("%lf",&num);
    
    if(num>0)
    {
        printf("The absolute value of the number is %lf",num);
    }
    if(num < 0)
    {
        printf("The absolute value of the number is %lf",num*-1);
    }
    return 0;
}  
    