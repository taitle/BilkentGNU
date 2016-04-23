#include <stdio.h>

int main(void){
	char x[10]="whoami";
	int i;
	for(i=0;i<6;i++){
		printf("%c\n",x[i]);
	}
	return 0;
}
