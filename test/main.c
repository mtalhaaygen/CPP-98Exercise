#include <stdio.h>
#include <stdbool.h>

int topla(int a, int b);
// int topla(int a, int b, int c);

int main()
{
	bool statement_true = true;
	char one = '1';
	bool statement_x = '1';
	bool statement_false = false;

	printf("statement_true : %d \nstatement_false : %d \n", statement_true, statement_false);

	printf("char olarak '1':%d - boolean olarak '1' %d\n", statement_x, one);

	int i = 0;

	int a = 2345;
	a = true;
	if (10)
	{
		printf("hello");
	}

	while (i < 8)
	{
		printf("statement : %d\n", ((char)statement_true >> i));
		printf("char onne : %d\n", (one >> i));
		i++;
	}

	int q = 10;
	int w = (10);
	int y = {10};
	
}