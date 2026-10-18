
/*
Name: Charity Mbugua
Reg No: CT100/G/30635/26
Description:BANK LOAN
Date: 25/09/2026
 */

#include<stdio.h>

int main()
{ int age;
  double income;
  
    printf("Enter your age.");
    scanf("%d",&age);
    printf("Enter your annualincomein kes:");
    scanf("%lf" ,&income);
    if(age>=21 &&income>=21000)
    {printf("Qualified loan\n");}
    else
    {printf("Unqualified for loan\n");}
    return 0;
}
