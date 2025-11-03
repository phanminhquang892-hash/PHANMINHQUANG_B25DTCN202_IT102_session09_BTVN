#include <stdio.h>

int main() {
    int n, i;
    int arr[n];

    printf("Nhap mang: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
    	printf("Nhap phan  %d: ",i);
        scanf("%d", &arr[i]);
    }

    printf("Cac phan tu trong mang la: ");
    for (i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}

