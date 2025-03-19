#include<stdio.h>
#include<math.h>

int computeHomeValue(int popularity, int size)
 {
 	
    return(pow(popularity, 3) + pow(size, 2)) * 10000;
	}
	
int main(){
	int popularity;
	int size;
	int homeValue;
	
	printf("Enter the popularity\n");
	scanf("%d",&popularity);
	printf("Enter the size\n");
	scanf("%d",&size);
	homeValue = computeHomeValue(popularity,size);
	printf("Home Value is %d",homeValue);
	return 0;
}
