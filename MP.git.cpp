#include <stdio.h>
#include <conio.h>


char display[5][5];


void board() //diplay board
{
	int i;

	for(i=0;i<5;i++){
		printf("       |     |     |     |\n");
		printf("    %c  |  %c  |  %c  |  %c  |  %c  \n",display[i][0],display[i][1],display[i][2],display[i][3],display[i][4]);
		if(i!=4)
			printf("  ----- ----- ----- ----- ----- \n");
	}
	printf("\n\n");
}

void displayboard(int n)			//initialize board														
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			display[i][j]=' ';														//initially all indices are made empty

}

void player1()
{
	int x,y;

	printf("Enter x and y co-ordinates of your move player 1: ");
	scanf("%d %d",&x,&y);															//user to input the x & y co-ordinate of his move

	if(display[--x][--y]!=' '){														//if his input index is not empty,invalid move is shown
		printf("Invalid move,try again\n\n");
		player1();
	}
	else 
	{
		display[x][y]='O';	
	}
							
	printf("\n\n\n");
}


void player2()
{
	int x,y;

	printf("Enter x and y co-ordinates of your move player 2: ");
	scanf("%d %d",&x,&y);															//user to input the x & y co-ordinate of his move

	if(display[--x][--y]!=' '){														//if his input index is not empty,invalid move is shown
		printf("Invalid move,try again\n\n");
		player2();
	}
	else 
	{
		display[x][y]='X';	
	}
							
	printf("\n\n\n");
}

char Win()
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

int main()
{
	char fin =' ', move_1, move_2, redo;
	int skill;
	displayboard(5);
	
	do{		
		printf("Player 1 what move would you like to do (n/m) \n");
		scanf("%c", &move_1);
		
		move_1 = getch();
		if(move_1 == 'n' || move_1 == 'N'){
			player1();																//player's move
			board();															//displaying the current matrix
		
		
		}
		else
		{
			printf("1. Take 2 Turns \n");
			printf("2. Flip space \n");
			printf("3. Blank four corners and center \n");
			printf("4. Free Row \n");	
			printf("5. Opponent chooses 3 for you \n");
			printf("6. Even it out \n");
			printf("7. Delete Ability \n");
			printf("8. Counter \n");
			printf("9. Normal Turn \n");
			
			printf("Player 1, choose a skill \n\n");
			scanf("%d", &skill);
			
			switch(skill)
			{
				case 1 : 
				printf("You get another turn \n");
				break;
				
				default :
					printf("Would you like to redo your turn? \n");
					scanf("%c", &redo);
					
					if(redo == 'y' || 'Y')
					{
						player1();
					} 
					else
					{
						player2();
					}
			}
		}
			fin=Win();	
			if(fin!=' ')
				break;	
				
				
		printf("Player 2 what move would you like to do (n/m) \n");
		move_2 = getch();
	
		if(move_2 == 'n' || move_2 == 'N'){
			player2();																//player's move
			board();															//displaying the current matrix
			fin=Win();	
		}
		else
		{
			printf("1. Take 2 Turns \n");
			printf("2. Flip space \n");
			printf("3. Blank four corners and center \n");
			printf("4. Free Row \n");	
			printf("5. Opponent chooses 3 for you \n");
			printf("6. Even it out \n");
			printf("7. Delete Ability \n");
			printf("8. Counter \n");
			printf("9. Normal Turn \n");
			
			printf("Player 2, choose a skill \n\n");
			scanf("%d", &skill);
			
			switch(skill)
			{
				case 1 : 
				printf("You get another turn \n");
				break;
				
				default :
					printf("Would you like to redo your turn? \n");
					scanf("%c", &redo);
					
					if(redo == 'y' || 'Y')
					{
						player2();
					} 
					else
					{
						player1();
					}
			}
		}
			
	}while(fin ==' ');
	
	if(fin=='X')																	//if the return is 'X',user won
		printf("Player 2 won\n");														
	else if(fin=='O')																//if the return is 'O',computer won
		printf("Player 1 won\n");													
	else if(fin=='D')																//if the return is 'D',match drawn
		printf("Match Drawn\n");

	return 0;
		
}
		

	


