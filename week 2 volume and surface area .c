/*
Name: Charity Mbugua
Reg No: CT100/G/30635/26
Description: Volume and surface area of a cylinder
Date: 24/09/2026
 */

#include<stdio.h>

int main()
{
float radius,height;
float volume,surface_area;
float pi=3.14159;
   
    printf("Enter the radius.");
    scanf("%f",&radius);
    printf("Enter the height.");
    scanf("%f",&height);
    
    volume=pi *radius * radius *height;
    surface_area= 2 * pi *radius * radius +
    2 * pi * radius *height;
    
    printf("volume = %.2f\n",volume);
    printf("surface area =%.2f\n",surface_area);
    return 0;
}
