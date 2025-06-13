 #include <stdio.h>
 /*To calculate the total no. of possible combinations*/
 
 int fact(int t)
     {
     if (t==0){
     return 1;}
     else {
     return t*fact(t-1);
     }
     }
     int main(){
     int n,r,C;
     printf("Enter the value of n :",n);
     scanf("%d",&n);
     printf(" Enter the value for r :",r);
     scanf("%d",&r);
     C = (fact(n))/(fact(r)*fact(n-r));
     printf("the total no. of possible combinations are %d\n",C);
     return 0;
     }
     