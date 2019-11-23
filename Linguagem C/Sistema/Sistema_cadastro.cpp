#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu_principal(); 

int main(){
	int opcao;
	char confirm;
	
	do{
		system("cls");
		opcao=menu_principal();
		
		switch(opcao){
			case 1:{
				break;
			}
			case 2:{
				break;
			}
			case 3:{
				break;
			}
			case 4:{
				break;
			}
			case 5:{
				break;
			}
			case 6:{
				break;
			}
			default:{
				break;
				printf("Opcao invalida !!!");
			}
		}
		system("pause");
		printf("Deseja realizar uma nova acao?\n ('Y' - SIM / 'N' - NAO)");
		fflush(stdin);
		scanf("%c",&confirm);
		
	}while (confirm != 'y' or confirm != 'Y');
	system("pause");
	
	
}

int menu_principal(){ 
	int opcao;
	printf("===========================================\n");
	printf("Sistema de cadastro de turmas e alunos\n\n");
	printf("Escolha uma opcao\n");
	printf("1 - Cadastro\n");
	printf("2 - Visualizar\n");
	printf("3 - Editar\n");
	printf("4 - Excluir\n");
	printf("5 - Pesquisar\n");
	printf("6 - Sair\n");
	scanf("%d", &opcao);
	return(opcao);
}
