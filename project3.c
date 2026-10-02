// variables and data type

#include<stdio.h>

int main(){
char grade='A'; //%c
char name [8]={"charity"};//%s
int age=18;//%d
float marks= 90;//%f
double pi=3.142;//%lf

printf("Enter your grade \t"); 
scanf(" %c",&grade);  
  
printf("Enter your name  \t"); 
scanf("%s",name);  
  
printf("Enter your age   \t");
scanf("%d",&age);  
  
printf("Enter your marks \t"); 
scanf("%f",&marks);  
  
printf("Enter pi   \t"); 
scanf("%lf",&pi);  
return 0;}

    