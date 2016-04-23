#include <stdio.h>

int main(void){
	
	int x;
	
	printf("Please enter a value: ");
	scanf("%d",&x);
	
	if(x==16)
		printf("\nYay, you did it.\n");
	else
		printf("\nMaybe next time.\n");
		
	return 0;
}
