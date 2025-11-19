#include <stdio.h>

int main() {
    char s[200], ch;
    int i, f = 0;

    printf("Enter a string: ");
    fgets(s, 200, stdin);

    printf("Enter character to search: ");
    scanf("%c", &ch);

    for(i=0; s[i]!='\0'; i++){
        if(s[i] == ch)
            f++;
    }

    printf("Frequency of '%c' = %d\n", ch, f);
    return 0;
}