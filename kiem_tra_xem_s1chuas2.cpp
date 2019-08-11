#include <stdio.h>
#include <string.h>

int main(){
	char s1[100], s2[100];
	printf("Nhap chuoi s1: \n");
	scanf("%s",s1);
	printf("Nhap vao chuoi s2: \n");
	scanf("%s",s2);
	printf("Chuoi s1 sau khi nhap la: %s\n",s1);
	printf("Chuoi s2 sau khi nhap la: %s\n",s2);
	if(strstr(s1,s2) != 0){
		printf("Chuoi s1 chua chuoi s2");
	}else{
		printf("Chuoi s1 khong chua chuoi s2");
	}
}
