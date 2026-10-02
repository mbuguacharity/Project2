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