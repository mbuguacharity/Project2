#include<stdio.h>

int main()
{float attendance;
float averagemarks;
    printf("enter attendance percentage:");
    scanf("%f", & attendance);
    printf("enter average marks:");
    scanf("%f",& averagemarks);
    if  (attendance >=75 && averagemarks >=40)
    
   {printf("Eligible\n");}
   else
   {printf("Not eligible\n");}
    return 0;
}