#include <stdio.h> // biblioteca de comunicação com o usuário
#include <stdlib.h> // biblioteca de alocação de espaço de memoria
#include <locale.h> // biblioteca de alocação de texto por região

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
			printf("Voce escolheu registrar nomes!\n");
			system("pause");
			break;
			
			case 2:
			printf("Voce escolheu consultar nomes!\n");
			system("pause");
			break;
			
			case 3:
			printf("Voce escolheu apagar nomes!\n");
			system("pause");
			break;
			
			default:
			printf("Infelizmente esta opção não está disponível! Favor escolher entre as opções 1, 2 ou 3.\n");
			system("pause");
			break;	
	
			
		}
	}
}
