#include <stdio.h>
#include <stdlib.h>

int servico; /*Variavel Global*/

int menu();
void deposito();
void extrato();
void trasferencia();
void saque();
void sair();

int main(){
	int opcao; /*variavel local*/
	menu();
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
	printf("6. Apagar\n\n");
	scanf("%d",&opcao);
	return(opcao);
	
}

void deposito(){
	
}
void extrato(){
	
}
void trasferencia(){
	
}
void saque(){
	
}
void sair(){
	
}
