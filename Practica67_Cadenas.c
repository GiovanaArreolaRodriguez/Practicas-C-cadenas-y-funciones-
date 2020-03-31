#include <stdio.h>


int main(){
	//strcat(<cadena_destino>,<cadena_origen>)
	int len;
	char origen[]="brisas";
	char destino[11]="para";
	strcat(destino,origen);
	printf("destino: %s \n",destino);
	
	system("Pause");
	return 0;
}
