/* KTOD: Do teclado para o disco. */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{	
	FILE *fp;
	char ch;
	register int t=1;

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
		putc(ch,fp);

	}while(ch!='$');

	fclose(fp);

	return 0;
}

