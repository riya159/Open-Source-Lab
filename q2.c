#include<stdio.h>
void main()	{
	FILE *f1;
	char ch;
	f1 = fopen("Q2.c","r");
	while(1) {
		ch = fgetc (f1);
		if (ch == EOF)
			break;
		printf("%c",ch);
	}
	fclose (f1);
}
