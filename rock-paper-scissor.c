#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char you, char computer)
{
	if(you == computer) return -1;
	if(you == 'r' && computer=='p') return 0;
	else if(you == 'r' && computer == 'z') return 1;
	else if(you == 'p' && computer == 'r') return 1;
	else if(you == 'p' && computer == 'z') return 0;
	else if(you == 'z' && computer == 'r') return 0;
	else if(you == 'z' && computer == 'p') return 1;
	
	
	return -1;
}
void RockPaperScissor()
{
	int n;
	char you, computer, result, y[10], c[10];
	srand(time(NULL));
	n = rand() % 100;

	if (n < 33)
	{
		computer = 'r';
		strcpy(c,"Rock");
	}else if (n > 33 && n < 66)
	{
		computer = 'p';
		strcpy(c,"Paper");
	}else
	{
		computer = 'z';
		strcpy(c,"Scissor");
	}
	printf("\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");
	scanf(" %c", &you);
	if (you == 'r')
	{
		strcpy(y,"Rock");
	}else if (you=='p')
	{
		strcpy(y,"Paper");
	}else
	{
		strcpy(y,"Scissor");
	}
	result = game(you, computer);

	if (result == -1) {
		printf("\n\n\t\t\t\tGame Draw!\n");
	}
	else if (result == 1) {
		printf("\n\n\t\t\t\tWow! You have won the game!\n");
	}
	else { 
		printf("\n\n\t\t\t\tOh! You have lost the game!\n");
	}
		printf("\t\t\t\tYou chose : %s\n\t\t\t\tComputer chose : %s\n\n----------------------------------------------------------------------------------------------------------\n",y, c);

		
}
int main()
{
	char ch;
	printf("Enter 1 for game and 2 for quit\n");
	do{
	printf("ENTER : ");
	scanf(" %c", &ch);
	switch(ch)
	{
	case 'n' : RockPaperScissor();
	break;
	case 'q' : printf("\nBye bye...see you in the next game.\n\n");break;
	default : printf("I didn't understand that...\n\n");
	break;
	}
	}while(ch!='q');
	return 0;
}

