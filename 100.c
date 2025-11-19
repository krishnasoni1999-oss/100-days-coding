#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int i, j, k;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    for(i=0; s[i]!='\0'; i++){
        for(j=i; s[j]!='\0'; j++){
            for(k=i; k<=j; k++){
                printf("%c", s[k]);
            }
            printf("\n");
        }
    }

    return 0;
}