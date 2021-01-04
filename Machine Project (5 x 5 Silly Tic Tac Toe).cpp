#include <stdio.h>
#include <conio.h>

//NEW BASE 5 x 5  TICTACTOE == 2 Players;

char display[5][5];
int player = 1;

void drawBoard() //diplay board
{
	int i;
		printf("       |  1  |  2  |  3  |  4  |  5  |\n");
		printf("  ----- ----- ----- ----- ----- ----- \n");
	for(i=0;i<5;i++){
		printf("       |     |     |     |     |     |\n");
		printf("    %d  |  %c  |  %c  |  %c  |  %c  |  %c  |\n",i+1, display[i][0],display[i][1],display[i][2],display[i][3],display[i][4]);
		if(i!=4)
			printf("  ----- ----- ----- ----- ----- ----- \n");
	}
	printf("\n\n");
}

void initBoard(int n)			//initialize board														
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			display[i][j]=' ';														

}

int getPlayer(int player) // gets player number
{
	player = (player % 2);
	if(player != 0)
	{
		player = 1;
	}
	else
	{
		player = 2;
	}
	return player;
}

int playerMove(int player) //normal move
{
	int x,y; 

	printf("Enter x and y co-ordinates of your move player %d: ", player);
	scanf("%d %d",&x,&y);															

	if(display[--x][--y]!=' '){													
		printf("Invalid move,try again\n\n");
		playerMove(player);
	}
	else if(player == 1)
	{
		display[x][y]='O';	
	}
	else  
	{
		display[x][y]='X';
	}
							
	printf("\n\n\n");
}


char checkWin()
{
	int i,j;


	for(i=0;i<4;i++)
		if((display[i][0]==display[i][1]&&display[i][1]==display[i][2])&&(display[i][2]==display[i][3]&&display[i][3]==display[i][4]))							
			return display[i][0];


	for(i=0;i<4;i++)
		if((display[0][i]==display[1][i]&&display[1][i]==display[2][i])&&(display[2][i]==display[3][i]&&display[3][i]==display[4][i]))							
			return display[0][i];


	if((display[0][0]==display[1][1]&&display[1][1]==display[2][2])&&(display[2][2]==display[3][3]&&display[3][3]==display[4][4]))								
		return display[0][0];


	if((display[0][4]==display[1][3]&&display[1][3]==display[2][2])&&(display[2][2]==display[3][1]&&display[3][1]==display[4][0]))								
			return display[0][4];

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(display[i][j]==' ')
				return ' ';																	//if we find any empty index,we simply return it
		}
	}

	//there is no identical rows,columns or diagonals,there is no empty indices left means the match is drawn and we return 'D'

	return 'D';
}

void displayWin(char getResult)
{
	if(getResult=='X')																	//if the return is 'X',user won
		printf("Player 2 won\n");														
	else if(getResult=='O')																//if the return is 'O',computer won
		printf("Player 1 won\n");													
	else if(getResult=='D')																//if the return is 'D',match drawn
		printf("Match Drawn\n");
}
/*
char showPlayerOptionsAndGetChoice(int player)
{
	char choice;
	bool isValid;

	printf("Player %d, enter your move : \n", player);
	printf("1. Take 2 Turns \n");
	printf("2. Flip space \n");
	printf("3. Blank four corners and center \n");
	printf("4. Free Row \n");	
	printf("5. Opponent chooses 3 for you \n");
	printf("6. Even it out \n");
	printf("7. Delete Ability \n");
	printf("8. Counter \n");
	printf("9. Normal Turn \n");
	
	do {
		scanf("%d", &choice);
		isValid = isValidChoice(player, choice6);

		if (!isValid)
		{
			printf("Player %d, you have made an invalid choise. \n", player);
			printf("Player %d, enter your move : \n", player);
		}
	} while (!isValid);

	return choice;
}
*/
bool isValidChoice(int player, char choice)
{
	// if the player chooses an ability, check if they have that ability

	return true;
}

void choosePlayerAbi()
{
	
}

void blankFourCornersAndCenter()
{
	display[1][1] = ' ';
	display[1][5] = ' ';
	display[5][5] = ' ';
	display[5][1] = ' ';
}
/*
void freeRow()
{
	char freeup; 

	printf("What row would you like to free up \n");
	freeup = getch();
	
	if (freeup == 'a' || freeup == 'b' || freeup == 'c' || freeup == 'd' ||freeup == 'e' )
	{
		if(a != sign || b != sign || c != sign || d != sign || e != sign)
		{
		a = 'a';
		b = 'b';
		c = 'c';
		d = 'd';
		e = 'e';
		}
	}
	else if (freeup == 'f' || freeup == 'g' || freeup == 'h' || freeup == 'i' ||freeup == 'j' )
	{
		a = 'a';
		b = 'b';
		c = 'c';
		d = 'd';
		e = 'e';
	}
}
*/
void letOpponentChoose(int player)
{
	// add logic here
}

void evenItOut(int player)
{
	// add logic here
}

void deleteAbility(int player)
{
	// add logic here
}

void counter(int player)
{
	// add logic here
}

/*
void processChoice(int player, char choice)
{
	if(choice == 1)
	{
		take2Turns(player);
	}
	else if(choice == 2)
	{
		flipSpace(player);
	}
	else if(choice == 3) //blank four corner and center
	{
		blankFourCornersAndCenter();
	}
	else if(choice == 4)
	{
		freeRow();
	}
	else if(choice == 5)
	{
		letOpponentChoose(player);	
	}
	else if(choice == 6)
	{
		evenItOut(player);
	}
	else if(choice == 7)
	{
		deleteAbility(player);
	}
	else if(choice == 8)
	{
		counter(player);
	}
	else if(choice == 9)
	{	
		getNormalMove(player);	
	}
}
*/
int main()
{
	char getResult =' ', choice;
	initBoard(5); // 5 because of 5 x 5 board...
	
	do{
			drawBoard();
			
			player = getPlayer(player);		//already gets player sign...
			//choice = showPlayerOptionsAndGetChoice(player);
			playerMove(player);	//replace with check abilities
												
			drawBoard(); //display board
																
			getResult = checkWin();	
			player++;
			if(getResult!=' ') //checks if space is taken
				break;	
				
			player = getPlayer(player);	
			playerMove(player);			
															
			drawBoard();	
																	
			getResult = checkWin();		
			player--;
			
			
	}while(getResult ==' ');
	
	displayWin(getResult);
	
	return 0;
		
}
		

	




