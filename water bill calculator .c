/*
Name: Charity Mbugua
Reg No: CT100/G/30635/26
Description: water bill
Date: 29/09/2026
 */

#include<stdio.h>

//function prototype 
float calculatebill( float units_consumed);

int main()
{float units_consumed,final_bill,result;
    printf("enter the unit consumed: \t");
    scanf("%f",&units_consumed);
    
    //funtion call
    result=calculatebill(units_consumed);
    final_bill= result;
    printf("units consumed:%.2f\n",units_consumed);
    printf("final bill:%.2f\n",final_bill);
    return 0;}
    
    //function defination
    float calculatebill (float units_consumed)
    {float final_bill;
    if (units_consumed<=100)
    {final_bill=units_consumed*10;}
    else if(units_consumed<=200)
   {final_bill=(100*10)+((units_consumed-100)*15);}
    else
    {final_bill=(100*10)+(100*15)+((units_consumed-200)*20);}
    
    return final_bill;}
