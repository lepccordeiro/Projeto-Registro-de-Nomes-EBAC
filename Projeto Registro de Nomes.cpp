#include <stdio.h> // biblioteca de comunicação com o usuário
#include <stdlib.h> // biblioteca de alocação de espaço de memoria
#include <locale.h> // biblioteca de alocação de texto por região
#include <string.h> // biblioteca responsavel pelas string


int registrar()
{
	setlocale(LC_ALL, "portuguese"); // definindo a linguagem
	
	char arquivo[40]; //criação da variavel "arquivo" com o tamanho de 40 caracteres (comando char)
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: "); // pergunta que aparece ao usuário
	scanf("%s",cpf); // será salvo como na vaiavel (comando "%") como uma string (letra "s"), neste caso "cpf" que é um conjunto de variáveis
	
	strcpy(arquivo,cpf); // responsavel por copiar os valores da string	
	
	FILE *file; // cria o arquivo "file" na pasta
	file = fopen(arquivo,"w"); // cria o arquivo na pasta, "w" (write) permite escrever o conteudo do arquivo, fopen informa que é para abrir o arquivo
	fprintf(file,cpf); //salva dentro do arquivo "file" a variavel "cpf" (comando fprintf)
	fclose(file); // fecha a inserção no arquivo "file"
	
	file = fopen(arquivo,"a");  // abrir e atualizar um arquivo que ja esta salvo na pasta file, (comando "a" = atualizar)
	fprintf(file,","); // cria um espaço entre os dados, apra que não fique tudo junto na mesma linha
	fclose(file); 
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);
		
	file = fopen(arquivo,"a");  
	fprintf(file,","); 
	fclose(file); 
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen (arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	system("pause");
	
	
}

int consultar()
{
	setlocale(LC_ALL, "portuguese"); // definindo a linguagem
	
	char cpf[40]; // cria novamente string cpf nesta função
	char conteudo[200];	// cria uma variavel que vai buscar o que ja esta salvo, o programa vai ler os arquivos
	
	printf("Digite o cpf a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r"); // abre o arquivo "cpf" e lê o conteudo ("r" de read)
	
	if (file==NULL) // se o valor não existir, então...
	{
		printf("Esse cpf não está cadastrado.\n"); // informe ao usuário
	}
	
	while(fgets(conteudo, 200, file) !=NULL) // enquanto houver letras dentro do arquivo "file", continue trazendo ate o limite de 200 caracteres até encontrar valo nulo
	{
		printf("\n Essas são as informações do cpf solicitado.");
		printf("%s", conteudo);
		printf("\n\n");
	}
	system("pause");
}

int deletar()
{
	printf("Voce escolheu apagar nomes!\n");
	system("pause");	
}


int main()
{
	int opcao=0; // definindo variaveis
	int x=1;
	
	for(x=1;x=1;)
	
	{
		
		setlocale(LC_ALL, "portuguese"); // definindo a linguagem
		
		system("cls");	
		
		printf("### Cartório EBAC ###\n\n"); // inicio do menu
		printf("Escolha a Opção desejada:\n\n\n");
		printf("\t1 - Registrar Nome\n");
		printf("\t2 - Consultar Nome\n");
		printf("\t3 - Apagar Nome do Registro\n\n\n\n");
		printf("Opção: "); // fim do menu
	
		scanf("%d", &opcao); // armazenando a opção do usuario
	
		system("cls");
		
		switch (opcao)
		{
			case 1:
			registrar();
			break;
			
			case 2:
			consultar();	
			break;
			
			case 3:
			deletar();
			break;
			
			default:
			printf("Infelizmente esta opção não está disponível! Favor escolher entre as opções 1, 2 ou 3.\n");
			system("pause");
			break;	
	
			
		}
	}
}
