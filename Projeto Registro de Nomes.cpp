#include <stdio.h> // biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // biblioteca de aloca��o de espa�o de memoria
#include <locale.h> // biblioteca de aloca��o de texto por regi�o

int main()
{
	int opcao=0; // definindo variaveis
	int x=1;
	
	for(x=1;x=1;)
	
	{
		
		setlocale(LC_ALL, "portuguese"); // definindo a linguagem
		
		system("cls");	
		
		printf("### Cart�rio EBAC ###\n\n"); // inicio do menu
		printf("Escolha a Op��o desejada:\n\n\n");
		printf("\t1 - Registrar Nome\n");
		printf("\t2 - Consultar Nome\n");
		printf("\t3 - Apagar Nome do Registro\n\n\n\n");
		printf("Op��o: "); // fim do menu
	
		scanf("%d", &opcao); // armazenando a op��o do usuario
	
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
			printf("Infelizmente esta op��o n�o est� dispon�vel! Favor escolher entre as op��es 1, 2 ou 3.\n");
			system("pause");
			break;	
	
			
		}
	}
}
