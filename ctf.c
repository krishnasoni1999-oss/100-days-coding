//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main (){

float celcius, fahrenheit ;
printf(" Enter temperature in celcius: ");
scanf("%f", &celcius );

fahrenheit = ( celcius * 9/5 ) + 32 ;

printf("%.2f C is equalt to %.2f F \n", celcius, fahrenheit );

return 0;

}