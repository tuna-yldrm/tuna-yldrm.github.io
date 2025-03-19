#include<stdio.h>
#include <math.h>
int main(void)
{
	int popularity;
	int size;
	int homeValue;
	
	printf("Enter the popularity\n");
	scanf("%d",&popularity);
	printf("Enter the size\n");
	scanf("%d",&size);
	homeValue = (pow(size,2) + pow(popularity,3))* 10000;
	printf("Home Value is %d",homeValue);
	return 0;
	
	
}
