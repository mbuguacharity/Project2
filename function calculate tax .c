/*
Name: Charity Mbugua
Reg No: CT100/G/30635/26
Date: 30/09/2026
 */


#include<stdio.h>
//function prototype 
float calculatetax(float gross_salary);

int main(){
float amount ,result,tax,netsalary;

printf("enter gross salary");
scanf("%f",&amount);
//function call
result=calculatetax(amount);
netsalary=amount - result;

printf("gross salary:ksh%.2f\n",amount);
printf("tax offered:ksh%.2f\n",result);
printf ("net salary:ksh%.2f\n",netsalary);
    return 0;}
    //function defination 
    float calculatetax(float gross_salary)
   { float tax;
    if(gross_salary<30000){tax= 0.05*gross_salary;}
   else if (gross_salary>=30000&&gross_salary<59999){tax=0.1* gross_salary;}
    else(gross_salary>=60000);
    
    return tax ;}
    
