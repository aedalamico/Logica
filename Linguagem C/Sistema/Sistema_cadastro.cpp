#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

struct tCad_turma {
	char nome_disciplina[20],
	nome_prof[30],
	data_inicio[10];
	int numero_alunos, codigo_turma;
};

struct tCad_aluno{
	char nome_aluno[30];
	int idade, codigo_turma;
	
};

int qtd_alunos, cd_turma;

int menu_principal(); /*MENU PRINCIPAL*/
void tela_cadastro(); /*MENU TELA DE CADASTRO*/
void cadastro_turma(); /*TELA DE CADASTRO DE TURMA*/
void cadastro_aluno(); /*TELA DE CADASTRO DE ALUNO*/
void tela_editar(); /*TELA DE EDITAR CADASTRO */
void editar_turma(); /*TELA EDITAR TURMA*/
void editar_aluno(); /*TELA EDITAR ALUNO*/
void tela_consulta(); /*TELA DE CONSULTA*/
void consulta_turma(); /*TELA DE CONSULTA TURMA*/

void sair(); /*TELA SAIR*/

int main(){ /* Função Principal*/
	int opcao;
	char confirma;
	
	do{
		system("cls");
		opcao=menu_principal();
		fflush(stdin);
		
		switch(opcao){
			case 1:{
				tela_cadastro();
				fflush(stdin);
				confirma='y';
				break;
			}
			case 2:{
				tela_editar();
				fflush(stdin);
				confirma='y';
				break;
			}
			case 3:{
				tela_consulta();
				break;
			}
			case 4:{
				break;
			}
			case 5:{
				break;
			}
			case 6:{
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

int menu_principal(){ /*FUNÇÃO MENU PRINCIPAL*/
	int opcao;
	fflush(stdin);
	printf("===========================================\n");
	printf("Sistema de cadastro de turmas e alunos\n\n");
	printf("Escolha uma opcao\n");
	printf("1 - Cadastro\n");
	printf("2 - Editar\n");
	printf("3 - Visualizar\n");
	printf("4 - Excluir\n");
	printf("5 - Pesquisar\n");
	printf("6 - Sair\n");
	scanf("%d", &opcao);
	return(opcao);
}

void tela_cadastro(){ /*FUNÇÃO  TELA DE CADASTRO DE TURMA E ALUNO*/
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
	}while (confirma == 'n' or confirma == 'N');
	system("cls");
	printf("Saindo do cadastro\n\n");
	system("pause");
}

void cadastro_turma(){ /*TELA DE CADASTRO DE TURMA*/
	
	struct tCad_turma turma;
	
	char confirma,confirma_aluno;
	
	//FILE *arq = fopen("turma.pro", "ab");
	
	do{
		FILE *arq = fopen("turma.pro", "ab");
		confirma='y';
		fflush(stdin);
		qtd_alunos = 0 ;
		cd_turma = 0;
		
		system("cls");
		printf("===========================================\n");
		printf("Cadastro de turmas\n");
		
		printf("Informe o codigo da turma:\n");
		fflush(stdin);
		scanf("%d", cd_turma);
		turma.codigo_turma = cd_turma;
		
		printf("Informe a disciplina:\n");
		fflush(stdin);
		scanf("%s", &turma.nome_disciplina);

		
		printf("Informe o numero de alunos:\n");
		fflush(stdin);
		scanf("%d",&turma.numero_alunos);
		
		printf("Informe o nome do professo:\n");
		fflush(stdin);
		scanf("%s",&turma.nome_prof);

		printf("Informe a data de inicio: (DD/MM/AAAA):\n");
		fflush(stdin);
		scanf("%s",&turma.data_inicio);
		
		printf("Deseja cadastrar alunos para esta turma? ('Y' - SIM / 'N' - NAO)\n ");
		scanf("%c", &confirma_aluno);
		fflush(stdin);
		if (confirma_aluno == 'Y'or confirma_aluno == 'y'){
			cadastro_aluno();
			printf("Cadastro de alunos realizado com sucesso!!!");
			system("cls");
			printf("Deseja cadastrar outra turma? ('Y' - SIM / 'N' - NAO)\n");
			scanf("%c", &confirma);
		}else{
			printf("Deseja cadastrar outra turma? ('Y' - SIM / 'N' - NAO)\n");
			scanf("%c", &confirma);
			printf("Cadastro de turma realizado com sucesso!!!");
		}
		
		fwrite (&turma, sizeof(turma), 1, arq);
		
	}while (confirma == 'y' or confirma == 'Y');
	system("cls");
	printf("Saindo do cadastro de Turma\n");
	system("pause");
	
	
}

void cadastro_aluno(){ /*TELA DE CADASTRO DE ALUNO*/

	struct tCad_aluno aluno;
	
	//FILE *arq = fopen("aluno.pro","ab");
	
	char confirma;
	
	do{
		FILE *arq = fopen("aluno.pro","ab");
		system("cls");
		printf("===========================================\n");
		printf("Cadastro de alunos\n\n");
		aluno.codigo_turma = cd_turma;
		
		printf("Nome do Aluno :\n");
		fflush(stdin);
		scanf("%s",&aluno.nome_aluno);

		
		printf("Idade :\n");
		fflush(stdin);
		scanf("%s", &aluno.idade);
		
		fwrite (&aluno, sizeof(aluno), 1, arq);
		
		fclose(arq);
		printf("Cadastro realizado com sucesso\n");
		system("pause");
		system("cls");
		printf("Deseja realizar outro cadastro de aluno? \n");
		fflush(stdin);
		scanf("%c", &confirma);
		if (confirma == 'n' or confirma == 'N'){
			printf("Você optou por sair do cadastro de alunos!\n");
		}
		
	}while (confirma == 'y' or confirma == 'Y');
	system("cls");
	printf("Saindo do cadastro de alunos\n");
	system("pause");
	
}


void tela_editar(){ /*TELA EDITAR*/
	int opcao;
	char confirma;
	do{
		fflush(stdin);
		system("cls");
		printf("===========================================\n");
		printf("Edição de aluno ou turma\n");
		printf("Escolha o que deseja editar\n");
		printf("1 - Editar turma\n");
		printf("2 - Editar aluno\n");
		printf("3 - Retornar ao meu principal\n");
		scanf("%d",&opcao);
		fflush(stdin);
		switch(opcao){
			case 1:{
				editar_turma();
				break;
			}
			case 2:{
				editar_aluno();
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
	}while (confirma == 'n' or confirma == 'N');
	system("cls");
	printf("Saindo da edição\n\n");
	system("pause");
	
}

void editar_turma(){ /*TELA EDITAR TURMA*/
	
}

void editar_aluno(){ /*TELA EDITAR ALUNO*/
	
}


void tela_consulta(){
	int opcao;
	char confirma;
	do{
		fflush(stdin);
		system("cls");
		printf("===========================================\n");
		printf("Consulta de alunos e turmas\n");
		printf("Escolha o que deseja consultar\n");
		printf("1 - Consultar turma\n");
		printf("2 - Consultar aluno\n");
		printf("3 - Retornar ao meu principal\n");
		scanf("%d",&opcao);
		fflush(stdin);
		switch(opcao){
			case 1:{
				
				break;
			}
			case 2:{
				
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
	}while (confirma == 'n' or confirma == 'N');
	system("cls");
	printf("Saindo da Consulta\n\n");
	system("pause");
}

void consulta_turma(){
	
	struct tCad_turma turma;
	struct tCad_aluno aluno;
	
	printf("Informe o código da turma que deseja consultar:\n");
	scanf("%d",cd_turma);
	
	FILE *arq = fopen("turma.pro","rb");

	
	while (fread(&turma, sizeof(turma), 1, arq)){
		if (cd_turma = turma.codigo_turma){
		
			printf("Codigo da Turma : %d\n Disciplina : %s \n Professor: %s \n Data de Inicio : %s \n Quantidade de alunos : %d \n ", 
			turma.codigo_turma, turma.nome_disciplina, turma.nome_prof, turma.data_inicio, turma.numero_alunos);
			FILE *arq = fopen("aluno.pro","rb");
			while (fread(&aluno, sizeof(aluno), 1, arq)){
				if (cd_turma = aluno.codigo_turma){
					printf("Aluno : %s , Idade : %d anos", aluno.nome_aluno, aluno.idade);
				}
			}
			fclose(arq);
		}
	}
	fclose(arq);
	
}

void sair(){ /*Sair da aplicação*/
	system("cls");
	printf("===========================================\n");
	printf("Voce escolheu sair do sistema");
	system("pause");
	system("exit");
	
}

