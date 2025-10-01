//Write a program to swap two numbers without using a third variable.

#include<stdio.h>
int main (){

int n, sum ;
printf ("Enter a positive integer n : ");
scanf("%d", &n);

sum = n * ( n + 1 )/ 2 ;

printf(" The sum of first %d natural number is : %d\n", n, sum);

return 0 ;

}