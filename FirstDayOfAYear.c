#include <stdio.h>  
  
int main()  
{  
    int year, diff, total_days, day;  
  
    printf("Enter a year between 2001 and 2099\n");  
    scanf("%d", &year);  
  
    diff = year - 2001;  
  
    total_days = (diff - (diff/4)) * 365 + (diff/4) * 366;  
    day        = total_days % 7;  
  
    printf("\nThe day on 01 January %d was ", year);  
  
    switch(day)  
    {  
        case 0: printf("Monday.\n");  
                break;  
        case 1: printf("Tuesday.\n");  
                break;  
        case 2: printf("Wednesday.\n");  
                break;  
        case 3: printf("Thursday.\n");  
                break;  
        case 4: printf("Friday.\n");  
                break;  
        case 5: printf("Saturday.\n");  
                break;  
        case 6: printf("Sunday.\n");  
                break;  
    }  
  
    return 0;  
}  
