#include <stdio.h>

int main() {
    char s[100];
    int i = 0, cnt = 0;

    printf("Enter a string: ");
    fgets(s, 100, stdin);

    while(s[i] != '\0') {
        cnt++;
        i++;
    }

    printf("Number of characters = %d\n", cnt-1);
    return 0;
}
