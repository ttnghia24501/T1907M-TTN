#include <stdio.h>

int main(){

	int tong = 0,a[10];

	for(int i=0; i < 10 ;i++){
		printf("Nhap gia tri phan tu\n");
		scanf("%d",&a[i]);
		
		tong += a[i];
	}
	printf("Gia tri trung binh la %d\n", tong/10);
	
	return 0;
	
	
}
