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

char *copiarCad(char *cadO, char *cadD){
	int i;
	for (i=0;i<longCad(cadO); i++){
		cadD[i]=cadO[i];

	}
	return cadD;
}

void main(int argc , char *argv[]){
	char *cad1 = argv[1];
	char *cad2 = (char *)malloc((longCad(cad1)));
	cad2[longCad(cad1)]= '\0';
	char *cadCopiada = copiarCad(cad1, cad2);
	printf("La cadena copiada es: %s\n",cadCopiada);
}