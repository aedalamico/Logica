#include <stdio.h>  
#include <stdlib.h>
#include <conio.h>

/*
Declaracao de constante*/
#define PI 3.1415 
#define GRAUS 'G'

//Prototipar funcao
float soma(float x1, float x2);

int main()  
{
	/*
	Declaramos uma variavel do tipo CARACTER 
	e atribuimos o carater 'D' a esta variavel
	*/
	//caracter
	char Ch = 'D';
	//cadeia de caracteres STRING
	char nome[10] = "jardelsss";
	//logico BOLEANO
	bool tem_energia = true;
	//inteiro
	int num1 = 10;
	//real
	float money = 1000.35;
	
	if ( num1 > 9) {
		printf("Executa quando a expressao eh verdadeira");
	}
	
	if ( num1 > 9) {
		printf("Executa quando a expressao eh verdadeira");
	}else{
		printf("so executa quando a expressao for falsa");
	}
	
	if ( num1 > 9) {
		printf("Executa quando a expressao eh verdadeira");
	}else if(num1 == 10){
		printf("so executa quando a expressao for verdadeira a expressao proxima");
	}else{
		printf("so executa se nenhuma das opcoes anteriores for verdadeira");		
	}
	
	
	switch (num1)	
	{
		case 10: 
		{
			printf ("Voce é lindo(a)!");
	 		break;   // Impede que as instruções do caso 2 sejam executadas
	 	}
	 	case 20: 
	 	{
	 		printf ("Voce é um monstro!");
	 		break;   // Impede que as instruções do caso 2 sejam executadas
	    }
	  	case 30:
	  	{
	 		printf ("Tchau!");
	 		break;
	    }
	 	default: 
		{
			// Será executado para qualquer opção diferente de 1, 2 ou 3
	 		printf ("Opção Inválida !");
	    }
	}
	 
	int contador = 0;
	for(contador = 1; contador <= 10 ; contador++ ) {
		//instrucoes
	}
	
	int i = 0; //contador
	while ( i < num1){
	
		//incrementar
		i++; // i = i + 1;
	}
	
	int x = 0; //contador
	do{
		printf("executa o bloco de codigo 1 vez antes de avaliar a expressao");
		//incrementar
		i++; // i = i + 1;
	}while( x < num1);
	
	
	
	//usar a funcao //chamar a funcao
	float num2 = 1110.01;
	float num3 = 2220.02;
	float guarda_retorno;
	guarda_retorno = soma(num2, num3);
	
	
	
	int dia;
	int mes;
	int ano;
	printf("informe um numero");
	scanf("%d/%d/%d", dia, mes, ano);

	
	char mes_atual[10];
	gets(mes_atual);
	
	
	
	system("pause");
}


float soma(float x1, float x2){
	float resultado = 0.0;
	
	resultado = x1 + x2;
	
	return resultado;
	
}












