/*ADICIONA AS BIBLIOTECAS*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> /*BLIBLIOTECA PARA MANIPULAR STRING*/

/*ADICIONA PROTOTIPOS DAS FUNÇÕES*/
int menu();
void deposito();
void extrato();
void transferencia();
void saque();
void sair();
void registrar(int modo);
bool registrar_deposito(char cpf[11], char agencia[6],char conta[12],float valor);

int main(){
	int opcao; /*variavel local*/
	int confirma;
	
	do{
		system("cls");
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
		printf("Deseja realizar uma nova acao ( Y - Sim / N - Nao)");
		fflush(stdin);
		scanf("%c",&confirma);
	} while (confirma != 'y' or confirma != 'Y');
	printf("Caixa Eletronico Encerrado");
	system("pause");
}

/*DECLARAÇÃO DE FUNÇÕES*/

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
	/*DECLARAÇÃO DAS VARIAVEIS DA FUNÇÃO*/
	float valor = 0.00;
	char conta[12];
	char agencia[6];
	char cpf[11];
	char confirma;
	
	fflush(stdin); /*realiza a limpeza do buffer*/
	system("cls"); /*clear - Limpar a tela*/
	
	printf("Deposito\n");
	printf("--------------------------------------\n");
	/*SOLICITAÇÃO DOS DADOS DE DEPOSITO*/
	printf("Informe o CPF: \n");
	gets(cpf);
	
	printf("--------------------------------------\n");
	printf("Informe a agencia para deposito: \n");
	gets(agencia);
		
	printf("--------------------------------------\n");
	printf("Infome a conta para deposito: \n");
	gets(conta);
	
	
	printf("--------------------------------------\n");	
	printf("Informe o valor a ser depositado: \n");
	scanf("%f",&valor);
	
	system("cls");
	
	printf("Deposito\n");
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	/*MOSTRA OS DADOS DO DEPOSITO*/
	printf("Viasualize os dados de deposito \n");
	printf("CPF: %s\n",cpf);
	printf("Agencia: %s\n",agencia);
	printf("Conta %s\n",conta);
	printf("Valor %f\n",valor);
	printf("--------------------------------------\n");
	
	do{
		printf("Confirma a operacao ? ( Y - Sim / N - Nao)");
		fflush(stdin);
		scanf("%c",&confirma);
		
	} while (confirma != 'y' and confirma != 'Y' and confirma != 'n' and confirma != 'N' );
	
	system("cls"); /*clear - Limpar a tela*/
	printf("Deposito\n");
	printf("--------------------------------------\n");

	registrar_deposito(cpf, agencia, conta, valor);
	
	printf("Deposito realizado com suscesso !\n");
	printf("--------------------------------------\n");	
	system ("pause");
	
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

void registrar(int modo){
	FILE *fp;
	/*ABRIR O ARQUIVO*/
	fp=fopen ("caixa_eletronico.data","wb");
	
	/*VERIFICA SE O ARQUIVO EH ACESSIVEL*/
	if (!fp){
		printf("Erro na abertura do arquivo.");
	}{
		switch(modo){
			case 1:{
				/*RETORNO O ARQUIVO PARA MANIPULAÇÃO*/
				break;
			}
			case 2:{
				/*SALVA O CONTEUDO NO ARQUIVO*/
				break;
			}
			default:{
				printf("Erro ao identificar o acao do arquivo");
				break;
			}
		}
		fclose(fp);
	}
}
bool registrar_deposito(char cpf[11], char agencia[6],char conta[12],float valor){
	char valor1[10];
	FILE *fp;
	/*ABRIR O ARQUIVO*/
	fp=fopen ("caixa_eletronico.txt","wb");
	
	/*VERIFICA SE O ARQUIVO EH ACESSIVEL*/
	if (!fp){
		printf("Erro na abertura do arquivo.");
	}{
		char registro[1024];
		strcat(registro, cpf);
		strcat(registro, ";");
		strcat(registro, agencia);
		strcat(registro, ";");
		strcat(registro, conta);
		strcat(registro, ";");
		sprintf(valor1, "%2.f",valor);
		strcat(registro, valor1);
		strcat(registro, ";");
	
		printf(registro);
		for (int i=0; registro[i]; i++);
		{
		//	printf("%s",registro[i]):
		//		putc(registro[i],fp);
			
		}
	
	}
	
}
