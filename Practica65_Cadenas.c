#include <stdio.h>

int main(){ 
	int len; 
	char origen[]="Origen"; 
	char destino[7]; 
	strcpy(destino, origen); 
	printf("destino: %s ", destino); 
	system("Pause"); 
	return 0; 
}
