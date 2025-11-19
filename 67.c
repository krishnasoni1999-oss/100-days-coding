#include <stdio.h>

int main() {
    int a[50], n, i, pos, x;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter position and value: ");
    scanf("%d %d", &pos, &x);

    for(i=n;i>pos;i--){
        a[i] = a[i-1];
    }

    a[pos] = x;
    n++;

    printf("Array after insertion:\n");
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }

    return 0;
}
