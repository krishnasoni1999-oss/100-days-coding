#include <stdio.h>

int main() {
    char s[300], word[100], longw[100];
    int i = 0, j = 0, max = 0, len;

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    while(1) {
        if(s[i] != ' ' && s[i] != '\0') {
            word[j++] = s[i];
        } else {
            word[j] = '\0';
            len = j;
            if(len > max) {
                max = len;
                int k;
                for(k=0;k<=len;k++)
                    longw[k] = word[k];
            }
            j = 0;
        }
        if(s[i] == '\0') break;
        i++;
    }

    printf("Longest word: %s\n", longw);

    return 0;
}
