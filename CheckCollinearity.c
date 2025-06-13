#include <stdio.h>  
  
int main()  
{  
    double ax,ay,bx,by,cx,cy;
    
    printf("Check the collinearity of 3 points.\n");
    printf("\nEnter the coordinates of A(ax,ay): ");
    scanf("%lf,%lf",&ax,&ay);
    
    printf("\nEnter the coordinates of B (bx,by): ");
    scanf("%lf,%lf",&bx,&by);
    
    printf("\nEnter the coordinates of C (cx,cy): ");
    scanf("%lf,%lf",&cx,&cy);
    
    if((by-ay)/(bx-ax) == (cy-by)/(cx-bx))
    {
        printf("\nThe points are collinear.");
    }
    else printf("\nThe points are non-collinear. ");
    return 0;
}  
    