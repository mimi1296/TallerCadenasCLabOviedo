#include <stdio.h>
#include <stdlib.h>

int longCad(char *cadena){
	int i;
	int cont = 0;
	for (i=0; cadena[i] != '\0'; i++){
		cont++;
	}
	return cont;
}

void main(int argc, char *argv[]){
	char *cadInput = argv[1];
	int n = longCad(cadInput);
	printf("La longitud de la cadena es: %d\n",n);
}