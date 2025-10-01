#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n >= 1) {
        sum = 1.0; 
    }
    for (int i = 2; i <= n; i++) {
        sum += (float)(2 * i - 1) / (2 * i);
    }
    printf("Sum of the series up to %d terms: %.2f\n", n, sum);
    getchar();
    getchar();
    return 0;
}