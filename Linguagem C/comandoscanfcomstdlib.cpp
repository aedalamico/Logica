#include <stdio.h>
#include <stdlib.h> 

int main(){
	/* EXEMPLO COM VARIAVEIS REAIS E INTEIROS
	int valor, valor1, valor2;
	float decimal;
	printf ("Informe um valor :");
	printf ("Informe 3 valores :\n");
	scanf ("%d", &valor);
	scanf ("%d %d %d %f", &valor, &valor1, &valor2, &decimal);
	
	printf ("O conteudo da variavel eh : %d\n", valor); 
	printf ("O conteudo da variavel 0 eh : %d\n", valor);
	printf ("O conteudo da variavel 1 eh : %d\n", valor1);
	printf ("O conteudo da variavel 2 eh : %d\n", valor2);
	printf ("O conteudo da variavel FLOAT eh : %.2f\n", decimal); /* O %.2 por exemplo é a quantia de casas decimais */
	
	/* EXEMPLO COM CARACTER
	char letra;
	printf ("Informe um caracter :\n");
	scanf ("%c",&letra);
	printf ("%c ",letra); */
	
	/*EXEMPLO COM TEXTO */
	char texto[20];
	printf ("Informe um texto :\n");
	gets(texto);
	printf ("%s \n",texto);

	
	system("pause");
	
}
