#include <stdio.h>
#include <string.h>

int main() {
    char a[200], b[200], temp[400];
    int i, j, len;

    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    if(strlen(a) != strlen(b)) {
        printf("Not rotation.\n");
        return 0;
    }

    strcpy(temp, a);
    strcat(temp, a);

    if(strstr(temp, b))
        printf("Rotation.\n");
    else
        printf("Not rotation.\n");

    return 0;
}
