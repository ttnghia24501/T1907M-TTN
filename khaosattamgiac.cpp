#include <stdio.h>
int main(){
	int a,b,c;
	
	do{
		printf("Nhap gia tri cua a\n");
		scanf("%d",&a);
		printf("Nhap gia tri cua b\n");
		scanf("%d",&b);
		printf("Nhap gia tri cua c\n");
		scanf("%d",&c);
	}while (a+b<= c && a+c<= b && b+c<= a);
	
	
	return 0;
		
}
