#include <stdio.h>

void Nhapmang(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Nhap a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void Xuatmang(int a[],int n){
	for(int i =0; i < n;i++){
		printf("%5d",a[i]);
	}
}
void Tangdan(int a[], int n){
	int tg;
	for(int i = 0; i < n-1;i++){
		for(int j = i+1;j < n; j++){
			if(a[i] > a[j]){
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}
void Giamdan(int a[], int n){
	int tg;
	for(int i = 0; i < n-1;i++){
		for(int j = i+1;j < n; j++){
			if(a[i] < a[j]){
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}
int main(){
	int a[100];
	int n;
	printf("Nhap so luong phan tu n = ");
	scanf("%d",&n);
	Nhapmang(a,n);
	Tangdan(a,n);
	printf("Mang da sap xep tang dan la \n");
	Xuatmang(a,n);
	Giamdan(a,n);
	printf("\nMang da sap xep giam dan la \n");
	Xuatmang(a,n);

}






