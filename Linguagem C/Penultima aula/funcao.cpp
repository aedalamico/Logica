#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int x,int y);
int subtrair(int x, int y);
int multiplicar(int x, int y);
int dividir(int x, int y);

int main(){
	int num1, num2, result;
	char operacao;
	
	do{
		system("cls");
		
		printf("Informe primeiro numero: \n");
		scanf("%d", &num1);
		fflush(stdin);
		
		printf("Informe a operação desejada: + - * /\n");
		scanf("%c", &operacao);
		fflush(stdin);
		
		printf("Informe o segundo numero : \n");
		scanf("%d",&num2);
		 fflush(stdin);
		
		switch (operacao){
			case '+':{
				result=soma(num1,num2);
				break;
			}
			case '-':{
				result=subtrair(num1,num2);
				break;
			}
			case '*':{
				result=multiplicar(num1,num2);
				break;
			}
			case '/':{
				result=dividir(num1,num2);
				break;
			}
			default:{
				printf("Opcao invalida");
				break;
			}
	
		}
	}while (operacao != '+' and operacao != '-' and operacao != '*' and operacao != '/' );
	
	printf("Resultado da operação : %d \n" , result);
	system("pause");
	
}


int soma(int x,int y){ //assinatura da função
	return(x+y);

}

int subtrair(int x, int y){
	return(x-y);

}

int multiplicar(int x, int y){
	return(x*y);	

}


int dividir(int x, int y){
	int resultado = 0;
	if (y == 0){
		printf("Não existe divisão por zero\n\n");
		return(resultado);
	}else{
		return(x/y);
	}

}

