#include <stdio.h>
#include <stdlib.h>

char *copiarN(char *cadO, char *cadD, int n){
	int i;
	for (i=0; i<n; i++){
		cadD[i]=cadO[i];
	}
	return cadD;
}

void main(int argc , char *argv[]){
	char *cad1 = argv[1];
	char *num = argv[2];
	int n = atoi(num);
	char *cad = (char *)malloc(n+1);
	copiarN(cad1, cad, n);
	printf("Los primeros n caracteres de la cadena son: %s\n",cad);
}