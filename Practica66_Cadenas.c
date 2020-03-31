#include <stdio.h>
#include <stdlib.h>

int main(){
	char antes[20];
	char despues[20];
	puts("Ingrese una palabra");
	scanf("%s", &antes);
	puts("Ingrese otra palabra");
	scanf("%s", &despues); 
	
	printf("Antes: %s \n ", despues);
	printf("Despues: %s \n", antes);
	
	system("Pause");
	return 0;
}
