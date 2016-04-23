#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char password[15]="\x62\x60\x73\x75\x6c\x60\x6f\x63\x73\x60"; //cartmanbra
	char enter[15];
	int i;
	
	printf("Please enter the password: ");
	scanf("%s",enter);
	
	if(strlen(enter)>10)
		goto fail;
		
	for(i=0;i<10;i++){
		if((password[i]^1) != enter[i])
			goto fail;
	}
	
	correct:
		printf("Correct. You did it.\n");
		return 0;
	
	fail:
		printf("Sorry, it's wrong.\n");
		exit(155);
	
	return 0;
}
