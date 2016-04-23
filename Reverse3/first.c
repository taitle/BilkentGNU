#include <stdio.h>

int whatami(int val){
	return (val>0) - (val<0);
}

int main(void){
	int num;//what is the initialization value?
	printf("%d\n",num);
	printf("%d\n",whatami(num));
	
	return 0;
}
