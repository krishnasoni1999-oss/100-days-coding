#include <stdio.h>

int main() {
    char s[200];
    int i, sp=0, dig=0, spec=0;

    printf("Enter a string: ");
    fgets(s, 200, stdin);

    for(i=0; s[i]!='\0'; i++){
        if(s[i] == ' ')
            sp++;
        else if(s[i] >= '0' && s[i] <= '9')
            dig++;
        else if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
        {
        }
        else
            spec++;
    }

    printf("Spaces = %d\nDigits = %d\nSpecial = %d\n", sp, dig, spec);
    return 0;
}
