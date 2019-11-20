#include <stdio.h>
#include <stdlib.h>

int servico; /*Variavel Global*/

int menu();
void deposito();
void extrato();
void transferencia();
void saque();
void sair();

int main(){
	int opcao; /*variavel local*/
	opcao =	menu();
	
	switch(opcao){
		case 1:{
			deposito();
			break;
		}
		case 2:{
			extrato();
			break;
		}
		case 3:{
			transferencia();
			break;
		}
		case 4:{
			saque();
			break;
		} 
		case 5:{
			sair();
			break;
		}
		default:{
			printf("opcao invalida");
			break;
		}
	}
	system("pause");
}

int menu(){
	int opcao;	
	printf("CAIXA ELETRONICO\n\n");
	printf("Escolha um serviço\n");
	printf("1. Deposito\n");
	printf("2. Extrato\n");
	printf("3. Trasferencia\n");
	printf("4. Saque\n");
	printf("5. Sair\n\n");
	scanf("%d",&opcao);
	return(opcao);
	
}

void deposito(){
	float valor = 0.00;
	char conta[12];
	char agencia[6];
	char cpf[11];
	
	system("cls"); /*clear - Limpar a tela*/
	printf("Deposito\n");
	printf("--------------------------------------\n");
	printf("Informe o valor a ser depositado: \n");
	scanf("%f",&valor);
	printf("--------------------------------------\n");
	printf("Infome a conta para deposito: \n");
	gets(conta);
	printf("--------------------------------------\n");
	printf("Informe a agencia para deposito: \n");
	gets(agencia);
	
	
	
}
void extrato(){
	printf("Extrato\n");
	
}
void transferencia(){
	printf("Transferencia\n");
}
void saque(){
	printf("saque\n");
	
}
void sair(){
	printf("Sair");
	
}
