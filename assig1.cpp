#include <stdio.h>
int main(){
 	int a,b;
	printf("Nhap a=\n");
	scanf("%d",&a);
	printf("Nhap b=\n");
	scanf("%d",&b);	
	
	if(a>b){
		printf("Thuong 2 so la: %d\n",a/b);
 	}else{
 		printf("Tich 2 so la: %d\n",a*b);
	}
		
	return 0;
}
