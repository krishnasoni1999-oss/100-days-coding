//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#define PI 3.141

int main (){
float radius, area, circumference;

printf(" Enter the radius of the circle : ");
scanf("%f", &radius);

area = PI * radius * radius ;
circumference = 2 * PI * radius ;

printf ("Area of circle : %2.f\n ", area );
printf ("Circumference of the circle : %2.f\n", circumference );

return 0 ;

}