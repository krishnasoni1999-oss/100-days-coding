#include <stdio.h>

int main() {
    char s[200];
    int i, last = 0;

    printf("Enter full name: ");
    fgets(s, sizeof(s), stdin);

    printf("%c.", s[0]);

    for(i=1; s[i] != '\0'; i++) {
        if(s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\0') {
            last = i + 1;
            printf("%c.", s[i+1]);
        }
    }

    printf("%s", &s[last]);

    return 0;
}
