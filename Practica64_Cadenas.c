#include <stdio.h>
#include <stdlib.h>

int main(){
	char cad[10];
	int len;
	int i,j;
	printf("Introduce una palabra \n");
	gets(cad);
	printf("\n \n %s \n", cad);
	len=strlen(cad);
	printf("La longitud de %s es: %d \n", cad, len);
	
	for(i=1;i<=len;i++){
		for(j=1;j<=len;j++){
			printf("*");
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}
