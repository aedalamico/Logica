#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu_principal(); 
void tela_cadastro();
void cadastro_aluno();
void cadastro_turma();

int main(){
	int opcao;
	char confirma;
	
	do{
		system("cls");
		opcao=menu_principal();
		
		switch(opcao){
			case 1:{
				tela_cadastro();
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
		scanf("%c",&confirma);
		
	}while (confirma != 'y' or confirma != 'Y');
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

void tela_cadastro(){
	int opcao;
	char confirma;
	do{
		fflush(stdin);
		system("cls");
		printf("===========================================\n");
		printf("Cadastro de alunos e turmas\n");
		printf("Escolha o que deseja cadastrar\n");
		printf("1 - Cadastro de turmas\n");
		printf("2 - Cadastro de alunos\n");
		printf("3 - Retornar ao meu principal\n");
		fflush(stdin);
		scanf("%d",&opcao);
		switch(opcao){
			case 1:{
				cadastro_turma();
				break;
			}
			case 2:{
				cadastro_aluno();
				break;
			}
			case 3:{
				system("cls");
				printf("Realmente deseja sair? ('Y' - SIM / 'N' - NAO) ");
				fflush(stdin);
				scanf("%c", &confirma);
				system("pause");
				break;
			}
			default:{
				system("cls");
				printf("Opçao ivalida\n\n");
				confirma='n';
				system("pause");
				break;
			}
		}
	}while (confirma != 'n' and confirma != 'N');
}

void cadastro_aluno(){
	
}

void cadastro_turma(){
	
}

