#include <stdio.h>

int main() {
    char s[100], rev[100];
    int i, len = 0, j;

    printf("Enter a string: ");
    fgets(s, 100, stdin);

    while(s[len] != '\0'){
        len++;
    }
    len--;

    j = 0;
    for(i = len-1; i >= 0; i--){
        rev[j] = s[i];
        j++;
    }
    rev[j] = '\0';

    printf("Reversed: %s\n", rev);

    return 0;
}
