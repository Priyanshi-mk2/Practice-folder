#include<stdio.h>
#include<math.h>
//Cartesian to polar co-ordinates 
    void main()
    {
    float x,y,r,phi;
    printf("Enter Cartesian co-ordinates : \nx = ",x);
    scanf("%f",&x);
    printf("y =",y);
    scanf("%f",&y);
    
    r = pow(x*x+y*y,0.5);
    
    phi = atan(y/x);
    printf("The polar co-ordinates are (%2f,%2f) ",r,phi);
    }