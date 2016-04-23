#include <stdio.h>
#include <string.h>

int main(void){
	
	char x[15];
	char str[15]="admin123";
	printf("Enter the username: ");
	scanf("%s",x);
	if(strcmp(x, str)==0){
		printf("Correct, lets go eat some kumpir.\n");
	}
	else{
		printf("Wrong, and i'm hungry.\n");
	}
	
	return 0;
}
