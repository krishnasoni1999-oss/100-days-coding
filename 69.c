#include <stdio.h>

int main() {
    int a[50], n, i;
    int max1 = -99999, max2 = -99999;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i] > max1){
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2 && a[i] != max1){
            max2 = a[i];
        }
    }

    printf("Second largest = %d\n", max2);

    return 0;
}
