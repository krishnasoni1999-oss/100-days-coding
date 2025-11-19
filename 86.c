#include <stdio.h>

int main() {
    char s[100];
    int i = 0, j, len = 0, ok = 1;

    printf("Enter a string: ");
    fgets(s, 100, stdin);

    while(s[len] != '\0'){
        len++;
    }
    len--;

    j = len - 1;

    while(i < j){
        if(s[i] != s[j]){
            ok = 0;
            break;
        }
        i++;
        j--;
    }

    if(ok == 1)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
