//Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main (){

    int a, b, C ;

    printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\n Before swapping : a = %d, b = %d\n ", a,b);

    C = a;
    a = b;
    b = C;

    printf("After swapping : a = %d, b = %d\n", a, b);
    return 0; 

}