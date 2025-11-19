#include <stdio.h>

int main() {
    char s[200], out[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    while(s[i] != '\0') {
        char c = s[i];

        if(!(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
             c=='A' || c=='E' || c=='I' || c=='O' || c=='U')) 
        {
            out[j] = c;
            j++;
        }

        i++;
    }

    out[j] = '\0';

    printf("String without vowels: %s", out);

    return 0;
}

