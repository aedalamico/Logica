//ADICIONAR BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h> //para manipular sistema operacional
#include <string.h> //manipular strings
#include <windows.h> //especifica para manipular o sistema windows
#include <locale.h> //Manipular a aos caracteres especiais

//ADICIONAR VARIAVEIS LOCAIS


//ADICIONAR OS PROTOTIPOS DE FUNCAO
int menu();
void deposito();
void extrato();
void transferencia();
void saque();
void sair();


//INICIALIZAMOS A FUNCAO PRINCIPAL - PRIMEIRA A SER EXECUTADA
int main(){
	
	int opcao; //VARIAVEL LOCAL
	int confirma;
	
	do
	{
		system("cls");
		opcao = menu();
		
		switch(opcao){
			case 1 :{
				deposito();
				break;
			}
			case 2 :{
				extrato();
				break;
			}
			case 3 :{
				transferencia();
				break;
			}
			case 4 :{
				saque();
				break;
			}
			case 5 :{
				sair();
				break;
			}
			default:{
				printf("\nOPCAO INVALIDA\n");
				break;
			}
		}
	
	
		printf("Deseja realizar uma nova acao ? ( Y-Sim / N-Nao )");
		fflush(stdin);
		scanf("%c",&confirma);
	
	} 
	while( confirma == 'y' or confirma == 'Y');
	
	printf("\n\nCAIXA ELETRONICO ENCERRADO\n\n");
	
	system("pause");
}

int menu(){
	int opcao; // VARIAVEL LOCAL
	printf(" \n CAIXA ELETRONICO \n");
	printf(" \n Escolha o servico \n");
	printf(" 1. Deposito \n");
	printf(" 2. Extrato \n");
	printf(" 3. Transferencia \n");
	printf(" 4. Saque \n");
	printf(" 5. Sair \n");
	printf("\n >");
	
	scanf("%d", &opcao);
	
	return opcao;
	
}

void deposito(){
	//DECLARANDO AS VARIAVEIS
	float valor = 0.00;
	char conta[12];
	char agencia[6];
	char cpf[11];
	char confirma;
	
	system("cls"); //clear - LINUX
	
	
	printf("------------------------------------------------- \n");
	printf("\n DEPOSITO \n");
	printf("------------------------------------------------- \n");

	printf("Informe o valor a ser depositado \n");
	fflush(stdin);
	scanf("%f", &valor);

	printf(" \n------------------------------------------------- \n");

	printf("Informe o cpf \n");
	fflush(stdin);
	gets(cpf);
	
	printf(" \n------------------------------------------------- \n");
	
	printf("Informe a agencia para desposito \n");
	fflush(stdin);
	gets(agencia);
	
	printf(" \n------------------------------------------------- \n");
	
	printf("Informe a conta para desposito \n");
	fflush(stdin);
	gets(conta);
	
	system("cls");
	
	printf("------------------------------------------------- \n");
	printf("\n DEPOSITO \n");
	printf("------------------------------------------------- \n");
	printf("Visualize os dados de deposito \n");
	printf("CPF: %s \n", cpf);
	printf("AGENCIA: %s \n", agencia);
	printf("CONTA: %s \n", conta);
	printf("VALOR: %f \n", valor);
	printf("------------------------------------------------- \n");
	do{
		printf("Confirma a operacao ? ( Y-Sim / N-Nao ) \n");
		fflush(stdin);
		scanf("%c",&confirma);
	} while( confirma != 'y' and confirma != 'Y' and confirma != 'n' and confirma != 'N');
	
	system("cls");
	printf("------------------------------------------------- \n");
	printf("\n DEPOSITO \n");
	printf("------------------------------------------------- \n");


	
	printf("Deposito registrado. \n");
	printf("------------------------------------------------- \n");
	system("pause");
	
}



void extrato(){
	printf("EXTRATO");
}
void transferencia(){
	printf("TRANSFERENCIA");
}

void saque(){
	//VARIAVEIS LOCAIS
	int saque;
    int resto50,resto20,resto10,resto5;
    int nota50,nota20,nota10,nota5;
	system("cls"); //clear - LINUX

	printf("------------------------------------------------- \n");
	printf("\n SAQUE \n");
	printf("------------------------------------------------- \n");
	
	


    do {
        printf("\nDigite o valor a ser sacado: \n >");
        scanf("%d",&saque);
        printf("\n");
        if (saque % 5 == 0 && saque <= 1000) {
            printf("Checando o Saldo"); 
            printf(".");
            Sleep(800);
            printf(".");
            Sleep(800);
            printf(".\n");
            Sleep(3000);
        	printf("Contando Cedulas");
            printf(".");
            Sleep(800);
            printf(".");
            Sleep(800);
            printf(".\n\n");
            Sleep(2000);

            nota50 = saque / 50;
            resto50 = saque % 50;
            nota20 = resto50 / 20;
            resto20 = resto50 % 20;
            nota10 = resto20 / 10;
            resto10 = resto20 % 10;
            nota5 = resto10 / 5;
            resto5 = resto10 % 5;
            
            
        }
        else{
        	system("cls"); //clear - LINUX
        	printf("voce digitou um valor de saque nao permitido. Tente novamente.\n\n");
		}
    }
    while (saque % 5 != 0 || saque > 1000);

	printf("Cedulas disponibilizadas:\n");
    printf("%d notas 50\n",nota50);
    printf("%d notas 20\n",nota20);
    printf("%d notas 10\n",nota10);
    printf("%d notas 5\n",nota5);
    printf("\n");
    printf("Retire seu dinheiro.");
    printf("\n");

    system("pause");
}
void sair(){
	printf("SAIR");
}

