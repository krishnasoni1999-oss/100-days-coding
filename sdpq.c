   //Write a program to input two numbers and display their sum, difference, product, and quotient.
   
   #include <stdio.h>
    int main (){
    int a,b ;

    printf(" Enter both the numbers: " );
    scanf("%d %d", &a, &b );

    printf(" Sum=%d\n ", a+b );
    printf(" Difference = %d\n ",a-b );
    printf(" Product = %d\n ", a*b);

    if( b!=0)
    printf("Quotient =%d\n ", a/b);
    else 
    printf("Quotient = undefined\n");

    return 0;

    }