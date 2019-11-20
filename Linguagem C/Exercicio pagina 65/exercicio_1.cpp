#include <stdio.h>
#include <stdlib.h>

int main(){
	char letra;
	printf ("Informe uma letra : ");
	scanf ("%c", &letra);
	printf ("Letra : %c\nHexadecimal : %x\nDecimal : %d \n", letra, letra, letra);
	
	system("pause");
}
