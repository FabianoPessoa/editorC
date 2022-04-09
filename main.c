/*
*******************************************************
* Compile o co'digo com:
* C:\> gcc main.c -o editor
* Escreva o texto:
* C:\> editor texto.txt
* Para terminar e escreve o programa escreva o caracter $
* Compilada: gcc
* CopyRight: Fabiano de Sousa Pessoa
* Date: 01/04/2022
* Para verificar conflito entre co'digos 
* fac,a renomei um co'difo e fa,ca:
* C:\> diff -w -B codigo1.txt codigo2.txt
* --------------------------------------------------
* Debugando o co'digo
* C:\> gcc programa.c -o nomeDoPrograma -g
* C:\> gdb nomeDoPrograma
* Inicializar
* C:\> (gdb) break main
* C:\> run
* Movendo o debuger pelo co'digo
* C:\> step
* Para ver o valor de uma varia'vel fac,a:
* C:\> display variavel
* Para finalizar
* C:\> quit
****************************************************
*/

/* KTOD: Do teclado para o disco. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h> /* include utilizado para utilizar o strcmp */

int main(int argc, char *argv[])
{	
	FILE *fp;
	char ch;
	register int t=1;
/*
*
* argc – é um valor inteiro que indica a quantidade 
* de argumentos que foram passados ao chamar o programa.
* argv[0] armazena o nome do programa que foi chamado 
* no prompt, sendo assim, argc é pelo menos igual a 1, 
* pois no mínimo existirá um argumento.
* ------------------------------------------------------
*    #include <stdio.h>
*    #include <conio.h>
*    int main( int argc, char *argv[ ] )
*    {
*      int cont;
*      
*      for(cont=0; cont < argc; cont++)
*        printf("%d Parametro: %s\n", cont,argv[cont]);
*      
*      getch();
*      return 0;
*    }
* --------------------------------------------------------
*/
	/* Entrada do Editor*/
	printf("\n=====================================");
	printf("\n***********-:{EditorC}:-*************");
	printf("\n $ termina o arquivo [Ent] nova linha");
	printf("\n-------------------------------------\n");
	/* ******************************************** */

	if(argc!=2){
		printf("Voce' no digitou o arquivo.\n");
		exit(1);
	}

/* --------- alteracao --------- */
/*
* Incluida para agregar os comandos de ajuda
*
*/
    if (strcmp(argv[1],"--help")==0){
        printf("\n help digitado");
				printf("\n");
				/* chamar a funcao help*/
		}
/* fim da alteracao */ 



	/* 
	 * fp=fopen(argc[1],"w")):
	 * Escreve em cima do arquivo e deixar uma marca EOF de fim de arquivo
	 *  fp=fopen(argc[1],"a")):
	 * Escreve no arquivo depois do sinal de fim de arquivo lido EOF
	 */
	if((fp=fopen(argv[1],"w"))==NULL) {
		printf("O arquivo n' foi aberto");
		exit(1);
	}
	/*  
	 * Acrecenta uma linha na entrada do loop 
	 */
	printf("%d: ",t);
	t++;

	do{

		/* script de nota linha */
		if(ch=='\n')
		{printf("%d: ",t);
		t++;}

		/* Alterar para escrever depois do fim do arquivo EOF */
		/* if */
		ch=getchar();
		/* colocar posicionamento do cursor */
		putc(ch,fp);

	}while(ch!='$');

	fclose(fp);

	return 0;
}


