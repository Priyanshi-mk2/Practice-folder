#include <stdio.h>  

void main()  
{  
    int num,sum,i;
    int array[5];
    
    printf("Enter five integers for the array: \n");
    
    for(i=0;i<=4;i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("Enter the number for which the sum is to be found: ");
    scanf("%d",&num);
    
    for(i = 0;i <= 4;i++)
    {
       for(int n = i+1;n <= 4;n++)
       {
        sum = array[i] + array[n];
        
        if(num == sum)
        {
            printf("The two numbers whose sum is equal to the given input are %d,%d",array[i],array[n]);
        }
       }
        
    }
}  
    