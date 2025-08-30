//Q1. write a program to input two numbers and display there sum

    #include<stdio.h>

    int main()
    {
        int a, b, sum;
        //user input
        printf("Enter the first number: ");
        scanf("%d", &a);

        printf("Enter the second number: ");
        scanf("%d", &b);

        //calculate sum
        sum = a+b;

        //display result
        printf("Sum of two numbers: %d\n", sum);

        return 0;
    }
