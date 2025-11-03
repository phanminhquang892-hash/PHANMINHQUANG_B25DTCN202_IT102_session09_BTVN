#include<stdio.h>

int main (){
	
	int sum = 0  , arr[100] ,n ;
	float avg ;
	
	printf ("Nhap vao so phan tu mang: ");
	scanf ("%d",&n);
	
	for (int i = 0 ; i < n ; i++){
		printf("Nhap phan tu  %d: ",i);
		scanf ("%d",&arr[i]);
		sum = sum + arr[i];
		
	}
	
	avg = sum / n ;
	printf("Gia tri trung binh cua mang la: %.2f ",avg) ;
	
	return 0;
}
