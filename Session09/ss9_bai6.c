#include <stdio.h>

int main() {
    int n, x , arr[n] ;
    int flag = 0;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can tim x: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Gia tri %d xuat hien tai vi tri %d\n", x, i);
            flag = 1;
        }
    }

    if (flag != 1)
        printf("Gia tri %d khong co trong mang!\n", x);

    return 0;
}

