#include <stdio.h>

int tinh_tong(int a, int b){
	int t;
	t = a+b;
 	return t;
}
int tinh_hieu(int a, int b){
	int h;
	h = a-b;

	return h;
}
int tinh_tich(int a,int b){
	int p;
	p = a*b;

	return p;
}
float tinh_thuong(int a,int b){
	float c;
	c = (float)a/(float)b;

	return c;
}



int main(){
	int a,b;

	printf("Nhap gia tri cua a = ");
	scanf("%d",&a);
	printf("Nhap gia tri cua b = ");
	scanf("%d",&b);
	
	
	int t = tinh_tong(a,b);
		printf("\nTong 2 so la %d",t);
	int h = tinh_hieu(a,b);
		printf("\nHieu 2 so la %d",h);
	int p = tinh_tich(a,b);
		printf("\nTich 2 so la %d",p);
	float c = tinh_thuong(a,b);
		printf("\nThuong 2 so la %lf",c);
	
	

	
	return 0;
	
}
	
