#include <stdio.h>

void nhap(int n, int a[]){
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu cua mang ");
		scanf("%d",&a[i]);
	}
}
int max(int a[], int n){
	int max = a[0];
	for(int i = 1; i < n; i++)
		if(max < a[i])
		max = a[i];
	return max;	
}
int main(){
	int a[10];
	int n;
	printf("Nhap so phan tu cua mang\n");
	scanf("%d",&n);
	nhap(n,a);
	max(a,n);
	printf("Max la %d",max(a,n));

	return 0;
}
