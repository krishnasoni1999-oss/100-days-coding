#include <stdio.h>

int main() {
    char s[200];
    int i;

    printf("Enter full name: ");
    fgets(s, sizeof(s), stdin);

    if(s[0] != ' ')
        printf("%c.", s[0]);

    for(i=1; s[i]!='\0'; i++){
        if(s[i]==' ' && s[i+1] != ' ' && s[i+1] != '\0')
            printf("%c.", s[i+1]);
    }

    return 0;
}