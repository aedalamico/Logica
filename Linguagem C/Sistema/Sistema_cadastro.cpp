#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

struct tCad_turma {
	char nome_disciplina[20],
	nome_prof[30],
	data_inicio[10];
	int numero_alunos, codigo_turma, status_turma; /* 0 - ATIVO  |  1 - INATIVO */
};

struct tCad_aluno{
	char nome_aluno[30],
	telefone_aluno[13]; 
	int idade, codigo_turma, status_aluno; /* 0 - ATIVO  |  1 - INATIVO */
	
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
void visualisar_turma(); /*VIZUALIZAR TURMAS*/
void tela_excluir(); /*TELA EXCLUIR*/
void excluir_turma();/*EXCLUIR TURMA*/
void excluir_aluno();/*EXCLUIR ALUNO*/
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
				fflush(stdin);
				confirma='y';
				break;
			}
			case 4:{
				excluir_turma();
				
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

int menu_principal(){ /*FUNÇÃO MENU PRINCIPAL*/
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
		printf("2 - Retornar ao meu principal\n");
		fflush(stdin);
		scanf("%d",&opcao);
		
		switch(opcao){
			case 1:{
				cadastro_turma();
				break;
			}
			case 2:{
				system("cls");
				printf("Realmente deseja sair? ('Y' - SIM / 'N' - NAO) ");
				fflush(stdin);
				scanf("%c", &confirma);
				if ( confirma == 'Y'or confirma == 'y'){
					return;
				}
				system("pause");
				break;
			}
			default:{
				system("cls");
				printf("Opcao ivalida\n\n");
				confirma='n';
				break;
			}
		}
		if (opcao != 3){
			printf("Deseja realizar outro cadastro? ('Y' - SIM / 'N' - NAO) ");
			fflush(stdin);
			scanf("%c", &confirma);
		}
		
	}while (confirma == 'y' or confirma == 'Y');
	system("cls");
	printf("Saindo do cadastro\n\n");
	system("pause");
}

void cadastro_turma(){ /*TELA DE CADASTRO DE TURMA*/
	
	struct tCad_turma turma;
	
	char confirma,confirma_aluno;
	
	
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
		scanf("%d", &cd_turma);
		
		turma.codigo_turma = cd_turma;
		
		printf("Informe a disciplina:\n");
		fflush(stdin);
		gets(turma.nome_disciplina);
		
		printf("Informe o nome do professo:\n");
		fflush(stdin);
		gets(turma.nome_prof);

		printf("Informe a data de inicio: (DD/MM/AAAA):\n");
		fflush(stdin);
		scanf("%s",&turma.data_inicio);
		
		turma.status_turma = 0;
		
		printf("Deseja cadastrar alunos para esta turma? ('Y' - SIM / 'N' - NAO)\n ");
		fflush(stdin);
		scanf("%c", &confirma_aluno);
		
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
		turma.numero_alunos = qtd_alunos;
		fwrite (&turma, sizeof(turma), 1, arq);
		fclose(arq);
		
	}while (confirma == 'y' or confirma == 'Y');
	system("cls");
	printf("Saindo do cadastro de Turma\n");
	system("pause");
	
	
}

void cadastro_aluno(){ /*TELA DE CADASTRO DE ALUNO*/

	struct tCad_aluno aluno;
	
	
	char confirma;
	
	do{
		FILE *arq = fopen("aluno.pro","ab");
		system("cls");
		printf("===========================================\n");
		printf("Cadastro de alunos\n\n");
		aluno.codigo_turma = cd_turma;
		
		printf("Nome do Aluno :\n");
		fflush(stdin);
		gets(aluno.nome_aluno);

		
		printf("Idade :\n");
		fflush(stdin);
		scanf("%s", &aluno.idade);
		
		printf("Telefone: \n");
		fflush(stdin);
		scanf("%s", &aluno.telefone_aluno);
		
		aluno.status_aluno = 0;
		
		fwrite (&aluno, sizeof(aluno), 1, arq);
		
		fclose(arq);
		qtd_alunos ++;
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
		printf("2 - Retornar ao meu principal\n");
		scanf("%d",&opcao);
		fflush(stdin);
		switch(opcao){
			case 1:{
				editar_turma();
				break;
			}
			case 2:{
				system("cls");
				printf("Realmente deseja sair? ('Y' - SIM / 'N' - NAO) ");
				fflush(stdin);
				scanf("%c", &confirma);
				if ( confirma == 'Y'or confirma == 'y'){
					return;
				}
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

	struct tCad_turma turma;
	

	char confirma_aluno,confirma;
		
	do{
		FILE *arq = fopen("turma.pro","r+b");
		system("cls");
		printf("===========================================\n");
		printf("Editar turma\n");
		printf("Informe o codigo da turma a ser editado: \n");
		fflush(stdin);
		scanf("%d",&cd_turma);
		
		while (fread(&turma, sizeof(turma), 1, arq)){
			if (cd_turma == turma.codigo_turma and turma.status_turma == 0){
				printf("Codigo da Turma : %d\nDisciplina : %s \nProfessor: %s \nData de Inicio : %s \nQuantidade de alunos : %d\n\n", 
				turma.codigo_turma, turma.nome_disciplina, turma.nome_prof, turma.data_inicio, turma.numero_alunos);
				
				qtd_alunos = turma.numero_alunos;
				
				fseek(arq,sizeof(struct tCad_turma)*-1, SEEK_CUR);
				
				printf("===========================================\n");
				printf("Informe o novo nome da disciplina:\n");
				fflush(stdin);
				gets(turma.nome_disciplina);
				
				printf("Infome o nome do professor:\n");
				fflush(stdin);
				gets(turma.nome_prof);
				
				printf("Informe a data de inicio:\n");
				fflush(stdin);
				gets(turma.data_inicio);
				
				printf("Deseja inserir alunos na turma?  ('Y' - SIM / 'N' - NAO) \n");
				fflush(stdin);
				scanf("%c",&confirma_aluno);
				
				turma.status_turma = 0;
				
				if (confirma_aluno == 'Y' or confirma_aluno == 'y'){
					cadastro_aluno();
				}
				
				turma.numero_alunos = qtd_alunos;
				
				fwrite(&turma,sizeof(turma), 1, arq);
				
				fseek(arq,sizeof(turma)* 0, SEEK_END);
				
				fclose(arq);
				
			}
			printf("Deseja realizar outro cadastro? ('Y' - SIM / 'N' - NAO) ");
			fflush(stdin);
			scanf("%c",&confirma);
		}
	}while (confirma == 'y' or confirma == 'Y');

	system("cls");
	printf("Saindo da edição de turmas\n");
	system("pause");
	
	
}

void editar_aluno(){ /*TELA EDITAR ALUNO*/
	
}


void tela_consulta(){ /*TELA DE CONSULTA*/
	int opcao;
	char confirma;
	do{
		system("cls");
		printf("===========================================\n");
		printf("Consulta de alunos e turmas\n");
		printf("Escolha o que deseja consultar\n");
		printf("1 - Consultar turma\n");
		printf("2 - Visualisar turmas\n");
		printf("3 - Retornar ao meu principal\n");
		
		fflush(stdin);
		scanf("%d",&opcao);
		
		switch(opcao){
			case 1:{
				consulta_turma();
				break;
			}
			case 2:{
				visualisar_turma();
				
				break;
			}
			case 3:{
				system("cls");
				printf("Realmente deseja sair? ('Y' - SIM / 'N' - NAO) ");
				fflush(stdin);
				scanf("%c", &confirma);
				if ( confirma == 'Y'or confirma == 'y'){
					return;
				}
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
	}while (confirma == 'Y' or confirma == 'y');
	system("cls");
	printf("Saindo da Consulta\n\n");
	system("pause");
}

void consulta_turma(){ /*CONSLUTAR TURMARS*/
	
	struct tCad_turma turma;
	struct tCad_aluno aluno;
	system("cls");
	printf("===========================================\n");
	printf("Consulta turmas\n");
	printf("Informe o código da turma que deseja consultar:\n");
	fflush(stdin);
	scanf("%d",&cd_turma);
	
	FILE *arq = fopen("turma.pro","rb");
	system("cls");
	system("pause");
	
	while (fread(&turma, sizeof(turma), 1, arq)){
		if (cd_turma == turma.codigo_turma and turma.status_turma == 0){
		
			printf("Codigo da Turma : %d\nDisciplina : %s \nProfessor: %s \nData de Inicio : %s \nQuantidade de alunos : %d\n", 
			turma.codigo_turma, turma.nome_disciplina, turma.nome_prof, turma.data_inicio, turma.numero_alunos);
			FILE *arq = fopen("aluno.pro","rb");
			if  (turma.status_turma == 0){
				printf("Status : Ativo\n\n");
			}else{
				printf("Status : Inativo\n\n");
			}
			while (fread(&aluno, sizeof(aluno), 1, arq)){
				if (cd_turma == aluno.codigo_turma){
					printf("Aluno : %s | Idade : %d  anos | Telefone : %s \n", aluno.nome_aluno, aluno.idade, aluno.telefone_aluno);
				}
			}
			fclose(arq);
		}
	}
	fclose(arq);
	system("pause");
	
}

void visualisar_turma(){ /*VISUALIZAR TURMAS*/
	
	struct tCad_turma turma;
	
	FILE *arq = fopen("turma.pro","rb");
	
	system("cls");
	printf("===========================================\n");
	printf("Listar turmas\n\n");
	
	while (fread(&turma, sizeof(turma), 1, arq)){
		printf("Codigo da Turma : %d\nDisciplina : %s \nProfessor: %s \nData de Inicio : %s \nQuantidade de alunos : %d\n", 
		turma.codigo_turma, turma.nome_disciplina, turma.nome_prof, turma.data_inicio, turma.numero_alunos);
		if  (turma.status_turma == 0){
			printf("Status : Ativo\n\n");
		}else{
			printf("Status : Inativo\n\n");
		}
	}
	fclose(arq);
	system("pause");
}

void tela_excluir(){ /*TELA EXCLUIR*/
	int opcao;
	char confirma;
	do{
		fflush(stdin);
		system("cls");
		printf("===========================================\n");
		printf("Exclusao de turmas\n");
		printf("Escolha o que deseja excluir\n");
		printf("1 - Excluir turma\n");
		printf("2 - Retornar ao meu principal\n");
		fflush(stdin);
		scanf("%d",&opcao);
		switch(opcao){
			case 1:{
				excluir_turma();
				break;
			}
			case 2:{
				system("cls");
				printf("Realmente deseja sair? ('Y' - SIM / 'N' - NAO) ");
				fflush(stdin);
				scanf("%c", &confirma);
				if ( confirma == 'Y'or confirma == 'y'){
					return;
				}
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
		printf("Deseja realizar outro cadastro? ('Y' - SIM / 'N' - NAO) ");
		fflush(stdin);
		scanf("%c",&confirma);
	}while(confirma == 'n' or confirma == 'N');
	system("cls");
	printf("Saindo da Exclusao\n\n");
	system("pause");
	
	
}

void excluir_turma(){ /*EXCLUSÃO DE TURMAS */
	struct tCad_turma turma;
	char confirma_ex, confirma;
	
	do{
		cd_turma = 0;
		FILE *arq = fopen("turma.pro","r+b");
		system("cls");
		printf("===========================================\n");
		printf("Consulta turmas\n");
		printf("Informe o código da turma que deseja excluir:\n");
		fflush(stdin);
		scanf("%d",&cd_turma);
		while (fread(&turma, sizeof(turma), 1, arq)){
			
			if (cd_turma == turma.codigo_turma){
				printf("Codigo da Turma : %d\nDisciplina : %s \nProfessor: %s \nData de Inicio : %s \nQuantidade de alunos : %d\n", 
				turma.codigo_turma, turma.nome_disciplina, turma.nome_prof, turma.data_inicio, turma.numero_alunos);
				if  (turma.status_turma == 0){
					printf("Status : Ativo\n\n");
				}else{
					printf("Status : Inativo\n\n");
				}
				printf("Realmente deseja exlcuir? ('Y' - SIM / 'N' - NAO) \n");
				fflush(stdin);
				scanf("%c",&confirma_ex);
				if (confirma_ex == 'y' or confirma_ex == 'Y'){
					turma.status_turma = 1;
					fseek(arq,sizeof(struct tCad_turma)*-1, SEEK_CUR);
					fwrite(&turma,sizeof(turma), 1, arq);
					fseek(arq,sizeof(turma)*0,SEEK_END);
					excluir_aluno();
					system("cls");
					printf("Dados alterados com sucesso !\n");
					system("pause");
					
				}else{
					system("cls");
					printf("Voce optou por nao alterar os dados !\n");
					system("pause");
				}
			}
	
		}
		fclose(arq);
		printf("Deseja realizar outra exclusao? ('Y' - SIM / 'N' - NAO) ");
		fflush(stdin);
		scanf("%c",&confirma);
	}while (confirma == 'y' or confirma == 'Y');
}

void excluir_aluno(){ /*EXCLUIR ALUNOS*/
	struct tCad_aluno aluno;
	
	
	FILE *arq = fopen("turma.pro", "r+b");
	while (fread (&aluno, sizeof(aluno), 1, arq)){
		if (cd_turma == aluno.codigo_turma ){
				fseek(arq,sizeof(struct tCad_aluno)*-1,SEEK_CUR);
				fwrite(&aluno,sizeof(aluno), 1, arq);
				fseek(arq,sizeof(aluno)*0,SEEK_END);
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

