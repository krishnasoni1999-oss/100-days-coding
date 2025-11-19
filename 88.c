#include <stdio.h>

int main() {
    char s[200];
    int i;

    printf("Enter a string: ");
    fgets(s, 200, stdin);

    for(i=0; s[i]!='\0'; i++){
        if(s[i] == ' ')
            s[i] = '-';
    }

    printf("Modified: %s\n", s);
    return 0;
}