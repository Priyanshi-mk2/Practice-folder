#include <stdio.h>  

void main()  
{  
    int i,j,num = 0;
    
    for(i = 1;i <= 5;i++)
    {
        for(j = i;j <= 5;j++)
     {
        printf("%d ",num);
        num++;
    }
    printf("\n");
    }
}  
    