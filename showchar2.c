#include <stdio.h>
void display(char cr, int lines, int width);

int main(void)
{
	int ch;
	int rows, cols;

	printf("Enter a character and two integers:\n");
	while(ch = getchar() != '\n')
	{
		if(scanf("%d %d", &rows, &cols) != 2)
		{
			break;
		}
		display(ch, rows, cols);
		while(getchar() != '\n')
		{
			continue;
		}
		printf("Enter another character and two integrers; \n");
		printf("Enter a newline to quit.\n");
	}
	printf("Bye. ");
	return 0;
}

void display(char cr, int lines, int width)
{
	for (int row = 1; row <= lines; row++)
	{
		for (int col = 1; col <= width; col++)
		{
			putchar(cr);
		}
		putchar('\n');
	}
}
