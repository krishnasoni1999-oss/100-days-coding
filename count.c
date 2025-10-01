#include<stdio.h>
int main (){
int num;
    int pcount = 0, ncount = 0, zerocount = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
           pcount++;
        else if (num < 0)
           ncount++;
        else
            zerocount++;

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("\nResults:\n");
    printf("Positive numbers: %d\n", pcount);
    printf("Negative numbers: %d\n", ncount);
    printf("Zeroes: %d\n", zerocount );

    return 0;
}





    









 