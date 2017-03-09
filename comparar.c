#include <stdio.h>

int longCad(char *cadena){
	int i;
	int cont = 0;
	for (i=0; cadena[i] != '\0'; i++){
		cont++;
	}
	return cont;
}

int comparar(char *s1, char *s2){
	int i;
	for (i=0; i<longCad(s1);i++){
		if (s1[i]<s2[i]){
			printf("La cadena 1 es: \t");
			return '<';
			printf("\n");
		}
		else{
			if (s1[i]>s2[i]){
				printf("La cadena 1 es: \t");
				return '>';
				printf("\n");
			}
		}
	}
	printf("la cadena 1 es: \t");
	return '=';
	printf("\n");
}



void main(int argc, char *argv[]){
	char *cad1 = argv[1];
	char *cad2 = argv[2];
	char x = comparar(cad1, cad2);
	printf("%c",x);
}