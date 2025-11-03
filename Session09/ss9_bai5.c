#include <stdio.h>

int main() {
    int n;
    int arr[n];
    int even = 0, old = 0;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
    	printf("Nhap phan tu %d: ",i);
        scanf("%d", &arr[i]);
    }
    printf("Cac so chan la: ");
    
    for (int i = 0; i < n; i++) {
    	
        if (arr[i] % 2 == 0) {
        	
            printf("%d ", arr[i]);
            even++;
        }
    }

    printf("\nCac so le la: ");
    
    
    for (int i = 0; i < n; i++) {
    	
        if (arr[i] % 2 != 0) {
        	
            printf("%d ", arr[i]);
            old++;
        }
    }

    printf("\nTong so chan = %d \n", even);
    printf("Tong so chan = %d \n", old);

    return 0;
}

