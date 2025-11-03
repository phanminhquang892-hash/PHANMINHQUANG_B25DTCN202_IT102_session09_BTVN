#include <stdio.h>
#include <math.h>

int main() {
    int number;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &number);
	
    int arr[number]; 
	
    for (int i = 0; i < number; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nCac phan tu trong mang la: ");
    for (int i = 0 ; i < number ; i++) {
        printf("%d ", arr[i]);
    }
	int sum = 0 ;
    printf("\nCac so nguyen to la: ");

    for (int i = 0; i < number; i++) {
        int n = arr[i];
        int flag = 1;

        if (n < 2) {
            flag = 0;
        } else {
            for (int j = 2; j <= sqrt(n); j++) {
                if (n % j == 0) {
                	printf("\nKhong phai so nguyen to: %d ",n);
                    flag = 0;
                    break;
                }
            }
        }

        if (flag == 1) {
            printf("%d ", n);
            sum += n;
        }
    }
	printf("\ntong cac so nguyen to: %d",sum);
    printf("\n");
    return 0;
}
