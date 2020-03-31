#include <stdio.h>

int main(){
	//strcat(<cadena_destino>,<cadena_origen>)
	int len, x;
	char origen[10];
	char destino[10];
	
	puts("Ingresa una palabra");
	scanf("%s", &origen);
	puts("Ingresa una palabra");
	scanf("%s", &destino);
	
	len=strlen(origen);
	strcat(origen,destino);
	printf("%s ",origen);
	
	for(x=0;x<len-1;x++){
		printf("%s ", destino);
	}
	
	
	printf("\n");
	system("Pause");
	return 0;
}
