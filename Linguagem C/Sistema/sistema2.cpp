#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int menu_principal();

int main(){
	int opcao;
	char confirma;
	
	do{
		system("cls");
		opcao=menu_principal();
		fflush(stdin);
		
		switch(opcao){
			case 1:{
				fflush(stdin);
				confirma='y';
				break;
			}
			case 2:{
				fflush(stdin);
				confirma='y';
				break;
			}
			case 3:{
				fflush(stdin);
				confirma='y';
				break;
			}
			case 4:{
				fflush(stdin);
				confirma='y';
				break;
			}
			case 5:{
				fflush(stdin);
				confirma='n';
				break;
			}
			default:{
				break;
				printf("Opcao invalida !!!");
				fflush(stdin);
				confirma='n';
			}
		}
		system("pause");
	//	printf("Deseja realizar uma nova acao?\n ('Y' - SIM / 'N' - NAO)");
		fflush(stdin);
		//Sscanf("%c",&confirma);
		
	}while (confirma == 'y' or confirma == 'Y');
	system("cls");
	printf("Fechando o sistema\n\n");
	system("pause");

}

int menu_principal(){
	int opcao;
	fflush(stdin);
	printf("===========================================\n");
	printf("Sistema de cadastro de turmas e alunos\n\n");
	printf("Escolha uma opcao\n");
	printf("1 - Cadastro\n");
	printf("2 - Editar\n");
	printf("3 - Consultar\n");
	printf("4 - Excluir\n");
	printf("5 - Sair\n");
	scanf("%d", &opcao);
	return(opcao);
	
}
