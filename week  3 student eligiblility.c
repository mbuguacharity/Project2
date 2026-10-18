/*
Name: Charity Mbugua
Reg No: CT100/G/30635/26
Description: student exam eligibility
Date: 1/10/2026
 */

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
