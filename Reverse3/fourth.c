#include <stdio.h>
#include <string.h>

int main(void){
	
	char x[15];
	char str[15]="admin123";
	printf("Enter the username: ");
	scanf("%s",x);
	if(strcmp(x, str)==0){
		printf("Correct.\n");
	}
	else{
		printf("Wrong.\n");
	}
	
	return 0;
}
