#include <stdio.h>

int main()
{
	printf ("Teste %% %%\n"); //-> "Teste % %"
	printf ("%f\n",40.345); //-> "40.345"
	printf ("Um caractere %c e um inteiro %d\n",'D',120); // -> "Um caractere D e um inteiro 120"
	printf ("%s e um exemplo\n","Este"); // -> "Este e um exemplo"
	printf ("%s%d%%","Juros de ",10); // -> "Juros de 10%"
	
	return(0);
}
