#include <stdio.h>

int main() {
    int n  ;
    int i = 0, j;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
	
	int arr[n] ;
	
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    i = 0;
    j = n - 1;

    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    printf("Mang sau khi dao nguoc la: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

