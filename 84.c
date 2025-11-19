#include <stdio.h>

int main() {
    char s[100];
    int i;

    printf("Enter lowercase string: ");
    fgets(s, 100, stdin);

    for(i=0; s[i] != '\0'; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 32;
        }
    }

    printf("Uppercase: %s", s);
    return 0;
}

