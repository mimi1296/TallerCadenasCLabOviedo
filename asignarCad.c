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

char *asignarCad(char *cad1, char *c){
	int i;
	char *cad2 = (char *)malloc(longCad(cad1));
	cad2[longCad(cad1)]= '\0';
	for(i=0; i<longCad(cad1);i++){
		cad2[i]=*c;
	}
	return cad2;
}


void main(int argc, char *argv[]){
	char *string = argv[1];
	char *x = argv[2];
	char *cadAsignada =  asignarCad(string, x);
	printf("cad es ahora: %s", cadAsignada);
}