#include<stdio.h>
#include<conio.h>

#define LEN 80
#define MAX 100

char text[MAX][LEN];

int main(void)
{
	/*register int t,i,j;*/
	register int t;
	printf("\n====================================");
	printf("\n**********-:{EditorC}:-*************");
	printf("\n----------------------------------\n");
	for(t=0;t<MAX;t++)
	{	
		printf("%d: ",t+1);
		gets(text[t]);
		if(!*text[t]) break;
	}
	printf("\n Exit Edito{C}");
/*	for(i=0;i<t;i++)
	{
		for(j=0;text[i][j];j++)
		{
			putchar('\n');
		}
	}*/
return 0;
}
