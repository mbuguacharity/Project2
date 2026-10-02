#include<stdio.h>

int main(){
float height= 12; //%f
double bankbalance=50000; //%lf 
char phonenumber[11]= "0756432112";//%s 

printf("enter height \t");
scanf("%f", &height);

printf("enter bankbalance \t");
scanf("%lf", &bankbalance);

printf("enter phonenumber \t");
scanf("%10s" ,&phonenumber);
return 0;}