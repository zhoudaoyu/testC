#include <stdio.h>

int main(void)
{
	int guess = 1;
	char response;
	while((response = getchar()) != 'y')
	{
		if(response == 'n')
		{
			printf("Well, then, is it %d?\n", ++guess);
		}
		else
		{
			printf("Sorry, I can only understand y or n.\n");
		}
		while (getchar() != '\n'){
			continue;
		}
	}
}
