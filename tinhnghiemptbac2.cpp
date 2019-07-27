#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
		printf("Nhap gia tri cua a\n");
		scanf("%d",&a);	
		printf("Nhap gia tri cua b\n");
		scanf("%d",&b);	
		printf("Nhap gia tri cua c\n");
		scanf("%d",&c);
	
	
	if (b*b - 4*a*c > 0){
		int D = b*b - 4*a*c;
		float x1 = ( -b + sqrt(D)) / (2*a);
		float x2 = ( -b - sqrt(D)) / (2*a);
			printf("Phuong trinh co 2 nghiem la x1 =%fl\n", x1);
			printf("va x2 =%fl\n", x2);
	}else if (b*b - 4*a*c == 0){
		int D = b*b - 4*a*c;
		float x = (-b) / (2*a);
			printf("Phuong trinh co nghiem kep la x =%fl\n", x); 
	}else{
			printf("Phuong trinh vo nghiem");
	}
	
	return 0;

}
