#include<stdio.h>

//Smallest number of notes required to combine to give rs. N
    void main()
    {
    int notes[]={100,50,10,5,2,1};
    int N,count =0,i =0;
    
    printf("Enter the value in rs. (N) :",N);
    scanf("%d",&N);
    
    while(N != 0){
     count = count + N/notes[i];
     N = N%(notes[i]);
     i= i+1;
     }
     printf("The smallest number of notes required : %d",count);
    }