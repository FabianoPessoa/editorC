#include<stdio.h>
#include<conio.h>

#define LEN 80
#define MAX 100

char text[MAX][LEN];

int main(void)
{
	register int t,i,j;
	printf("\n=======================");
	printf("\n*******-:Editor:-******");
	printf("\n-----------------------\n");
	for(t=0;t<MAX;t++)
	{	
		printf("%d: ",t);
		gets(text[t]);
		if(!*text[t]) break;
	}
	for(i=0;i<t;i++)
	{
		for(j=0;text[i][j];j++)
		{
			putchar('\n');
		}
	}
return 0;
}
