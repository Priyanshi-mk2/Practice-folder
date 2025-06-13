 #include <stdio.h>
 //distance from km to meter,feet,inch and cm
    void main()
    {
    float d;
    printf("enter the distance in km ",d);
    scanf("%f",&d);
    
    printf("d in meter = %f\n",d*1000);
    printf("d in feet = %f\n",d*3280.84);
    printf("d in inch = %f\n",d*39370.1);
    printf("d in centimeters = %f",d*100000);
    }