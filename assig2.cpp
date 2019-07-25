#include <stdio.h>
int main(){
 	int a,b,c;
 	
 	printf("Nhap a \n");
 	scanf("%d", &a);
	printf("Nhap b \n");
 	scanf("%d", &b);
	printf("Nhap c \n");
 	scanf("%d", &c);   
{
	  	
 	int max = a;
 	if( max < b );
 	{
	 	max = b;
	}

{
	if( max < c ) 
		max = c;
	}
	 printf("Max la %d\n", max);
}
{
	int min = c;
	if( min > b );
	{
	 	min = b;
	}
	
	if( min > a); {
	   
	   min = a;
}
	 printf("Min la %d\n", min);
}
	return 0;
}

	
	
