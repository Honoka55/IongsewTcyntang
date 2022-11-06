#include <stdio.h>

int main(){
	int a = 1;
	while(1) {
		scanf("%d",&a);
		if (a < 1 || a > 869) break;
		else printf("u+%x\n",a+57343);
	}
	return 0;
}
