#include <stdio.h>

int main() {
    char s[100];
    int i, v = 0, c = 0;

    printf("Enter a string: ");
    fgets(s, 100, stdin);

    for(i=0; s[i]!='\0'; i++){
        if((s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z')){
            char ch = s[i];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                v++;
            else
                c++;
        }
    }

    printf("Vowels = %d\nConsonants = %d\n", v, c);
    return 0;
}

