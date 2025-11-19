#include <stdio.h>

int main() {
    char a[200], b[200];
    int c1[26] = {0}, c2[26] = {0};
    int i;

    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);

    for(i=0; a[i]!='\0'; i++){
        if(a[i]>='a' && a[i]<='z')
            c1[a[i]-'a']++;
        else if(a[i]>='A' && a[i]<='Z')
            c1[a[i]-'A']++;
    }

    for(i=0; b[i]!='\0'; i++){
        if(b[i]>='a' && b[i]<='z')
            c2[b[i]-'a']++;
        else if(b[i]>='A' && b[i]<='Z')
            c2[b[i]-'A']++;
    }

    for(i=0; i<26; i++){
        if(c1[i] != c2[i]){
            printf("Not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");

    return 0;
}