#include "stdio.h"
#define NAME "GIGATHINK,INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis,CA 94904"
#define WIDTH 40

void show_n_char(int num ,char  ch);

int main(void)
{
	show_n_char(WIDTH,'*');
	putchar('\n');
	show_n_char(10,' ');
	printf("%s\n",NAME);
	show_n_char(8,' ');
	printf("%s\n",ADDRESS);
	show_n_char(7,' ');
	printf("%s\n",PLACE);
	show_n_char(40,'*');	
	return 0;
}

void show_n_char(int num,char ch)
{
	int count;
	
	for(count = 1; count <= num ; count ++)
	{
		putchar(ch);
	}
	// putchar('\n');
}