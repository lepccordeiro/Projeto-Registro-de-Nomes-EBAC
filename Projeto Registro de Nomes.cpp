#include <stdio.h> // biblioteca de comunicação com o usuário - todo comando "printf" irá buscar os dados dessas bibliotecas
#include <stdlib.h> // biblioteca de alocação de espaço de memoria
#include <locale.h> // biblioteca de alocação de texto por região
#include <string.h> // biblioteca responsavel pelas string


int registrar() // so enxerga o que esta dentro dos colchetes, funçao para registrar os usuarios no sistema
{
	setlocale(LC_ALL, "portuguese"); // definindo a linguagem
	
	char arquivo[40]; //criação da variavel "arquivo" com o tamanho de 40 caracteres (comando char), pode ser letra ou numero
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: "); // pergunta que aparece ao usuário, para coletar informações
	scanf("%s",cpf); // será salvo como na variavel (comando "%") como uma string (letra "s"), neste caso "cpf" que é um conjunto de variáveis
	
	strcpy(arquivo,cpf); // responsavel por copiar os valores da string	
	
	FILE *file; // cria o arquivo "file" na pasta
	file = fopen(arquivo,"w"); // cria o arquivo na pasta, "w" (write) permite escrever o conteudo do arquivo, fopen informa que é para abrir o arquivo
	fprintf(file,cpf); //salva dentro do arquivo "file" a variavel "cpf" (comando fprintf)
	fclose(file); // fecha a inserção no arquivo "file"
	
	file = fopen(arquivo,"a");  // abrir e atualizar um arquivo que ja esta salvo na pasta file, (comando "a" = atualizar)
	fprintf(file,","); // cria um espaço entre os dados, apra que não fique tudo junto na mesma linha
	fclose(file); 
	
	printf("Digite o nome a ser cadastrado: "); // pergunta feita ao usuario
	scanf("%s",nome);
	
	file = fopen(arquivo,"a"); // Abre o arquivo uma única vez no modo "a" (append)
	fprintf(file,nome); //salva a string "nome" no arquivo "file"
	fclose(file); // Fecha o arquivo após todas as operações serem concluídas
		
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

int consultar() // so enxerga o que esta dentro dos colchetes
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

int deletar() // so enxerga o que esta dentro dos colchetes
{
		
	char cpf[40];
	
	printf("Digite o cpf a ser deletado: ");
	scanf("%s",cpf); // ira buscar todas as variaveis no "string" nos arquivos, por causa do comando "s"
	
	remove(cpf); // ira remover a string com o cpf informado
	
	
	FILE *file; // entrar na biblioteca de arquivos (FILE), e dentro dela buscar os arquivos de interesse (*file)
	file = fopen(cpf, "r");  // o arquivo file é igual a (função abrir arquivo {fopen} e buscar o cpf informado) e ler ("r") o valor
	
	if (file == NULL) // Verifica se o arquivo existe
    {
        printf("Esse cpf foi deletado ou não está cadastrado.\n");
        system("pause");
    }
    
     	
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
		printf("\t3 - Apagar Nome do Registro\n");
		printf("\t4 - Sair do programa\n\n\n");
		printf("Opção: "); // fim do menu
	
		scanf("%d", &opcao); // armazenando a opção do usuario
	
		system("cls"); // limpa a tela
		
		switch (opcao) //começo da seleção do menu
		{
			case 1:
			registrar(); //chamada de funções
			break;
			
			case 2:
			consultar();	
			break;
			
			case 3:
			deletar();
			break;
			
			case 4:
			printf("Obrigado por usar o programa!\n");
			return 0;
			break;	
			
			default:
			printf("Infelizmente esta opção não está disponível! Favor escolher entre as opções 1, 2, 3 ou 4.\n");
			system("pause");
			break;	
			// fim da seleção do menu
			
		}
	}
}
