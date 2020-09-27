#include <stdio.h>

int main(void)
{
	int i;
	char d[50];
	scanf("%s",d);
	for(i=0; d[i]!='\0'; i++)
	{
		printf("\'%c\'\n",d[i]);
	}
}

