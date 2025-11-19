#include <stdio.h>

int main() {
    int a[10][10], n, i, used[1000]={0}, ok = 1;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++){
        int x = a[i][i];
        if(used[x] == 1){
            ok = 0;
            break;
        }
        used[x] = 1;
    }

    if(ok == 1)
        printf("Diagonal elements are distinct\n");
    else
        printf("Diagonal elements are NOT distinct\n");

    return 0;
}