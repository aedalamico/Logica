#include <stdio.h>
#include <stdlib.h>

int main(){
	char str1[15],str2[15];
	printf ("Informe duas palavras\n");
	gets(str1);
	gets(str2);
	printf ("Primeira palavra: %s\nSegunda palavra: %s\n", str1, str2 );
	printf ("Segundo caracter da primeira palavra: %c\nSegundo caracter da segunda palavra: %c\n", str1[1], str2[1] ); /* Foi usado o %c para imprimir apenas o caracter da posição do vetor da string */
	
	system("pause");
}
