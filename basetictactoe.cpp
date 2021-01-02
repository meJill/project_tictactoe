#include <stdio.h>
#include <conio.h>

//NEW BASE 5 x 5  TICTACTOE == 2 Players;
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
	char fin =' ';
	
	displayboard(5);
	
	do{
			player1();																//player's move
			board();															//displaying the current matrix
			fin=Win();	
			
			if(fin!=' ')
				break;	
				
			player2();																//player's move
			board();															//displaying the current matrix
			fin=Win();	
			
	}while(fin ==' ');
	
	if(fin=='X')																	//if the return is 'X',user won
		printf("Player 2 won\n");														
	else if(fin=='O')																//if the return is 'O',computer won
		printf("Player 1 won\n");													
	else if(fin=='D')																//if the return is 'D',match drawn
		printf("Match Drawn\n");

	return 0;
		
}
		

	



