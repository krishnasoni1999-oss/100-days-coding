#include <stdio.h>

int main() {
    char s[200];
    int i, j, found = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            for(j = i + 1; s[j] != '\0'; j++) {
                if(s[i] == s[j]) {
                    printf("First repeating lowercase letter: %c\n", s[i]);
                    found = 1;
                    break;
                }
            }
        }
        if(found) break;
    }

    if(!found)
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
