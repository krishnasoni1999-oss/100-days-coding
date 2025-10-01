#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (2.0 * i) / (4 * i - 1);
    }

    printf("The sum of the series up to %d terms is: %.2f\n", n, sum);
    getchar();
    getchar();
    return 0;
}