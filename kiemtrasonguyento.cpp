#include <stdio.h>
#include <math.h>
int main(){
	int n;
		printf("Nhap gia tri cho n = ");
		scanf("%d",n);
	int dem_so_luong_uoc = 0;
	int i = 1;
	for (i<= n; ++i;);
	{
		if( n%i== 0){
			dem_so_luong_uoc++;
			
		}
	}
	
	if(	dem_so_luong_uoc){
		printf("n la so nguyen to");
	}else{
			printf("n khong phai so nguyen to");
	}
	
	return 0;	
	
}
