#include <stdio.h>
#include <conio.h>


char a = 'a', b = 'b', c = 'c', d = 'd', e = 'e', f = 'f', g = 'g', h = 'h', i = 'i', j = 'j', k = 'k', l = 'l' , m = 'm',
     n = 'n', o = 'o', p = 'p', q = 'q', r = 'r', s = 's', t = 't', u = 'u', v = 'v', w = 'w', x = 'x', y = 'y';

char sign;
int player = 1;
int player1Abilities[10] = {'o', 1, 2, 3, 4, 5, 6, 7, 8, 9};
int player2Abilities[10] = {'o', 1, 2, 3, 4, 5, 6, 7, 8, 9};

void drawBoard()
{
	printf("---------------------\n");
	printf("| %c | %c | %c | %c | %c |\n", a, b ,c, d, e);
	printf("---------------------\n");
	printf("| %c | %c | %c | %c | %c |\n", f, g, h, i, j);
	printf("---------------------\n");
	printf("| %c | %c | %c | %c | %c |\n", k, l, m, n, o);
	printf("---------------------\n");
	printf("| %c | %c | %c | %c | %c |\n", p, q, r, s, t);
	printf("---------------------\n");
	printf("| %c | %c | %c | %c | %c |\n", u, v, w, x, y );
	printf("---------------------\n");
}

int isBoardFull()
{
	return a != 'a' && b != 'b'&& c != 'c'&& d != 'd'&& e != 'e'&& f != 'f'&& g != 'g'&& h != 'h'&& i != 'i'&& j != 'j'&& k != 'k'&& l != 'l' && m != 'm'&&
	       n != 'n'&& o != 'o'&& p != 'p'&& q != 'q'&& r != 'r'&& s != 's'&& t != 't'&& u != 'u'&& v != 'v'&& w != 'w'&& x != 'x'&& y != 'y';
}

int getCurrentGameProgress(int player)
{
	if (a == player && b == player && c == player && d == player && e == player)
	{
		return 1;
	}
	else if(f == player && g == player && h == player && i == player && j == player)
	{
		return 1;
	}
	else if(k == player && l == player && m == player && n == player && o == player)
	{
		return 1;
	}
	else if(p == player && q == player && r == player && s == player && t == player)
	{
		return 1;
	}
	else if(u == player && v == player && w == player && x == player && y == player)
	{
		return 1;
	}
	else if(a == player && f == player && k == player && p == player && u == player)
	{
		return 1;
	}
	else if(b == player && g == player && l == player && q == player && v == player)
	{
		return 1;
	}
	else if(c == player && h == player && m == player && r == player && w == player)
	{
		return 1;
	}
	else if(d == player && i == player && n == player && s == player && x == player)
	{
		return 1;
	}
	else if(e == player && j == player && o == player && t == player && y == player)
	{
		return 1;
	}
	else if(a == player && g == player && m == player && s == player && y == player)
	{
		return 1;
	}
	else if(e == player && i == player && m == player && q == player && u == player)
	{
		return 1;
	}
	else if(isBoardFull())
	{
		return 0;
	}
	else
	{
		return - 1;
	}
}

void getNormalMove(int player)
{

	char choice;
	int isValidMove;

	do
	{
		isValidMove = true;

		printf("Player %d, enter your move : \n", player);
		scanf(" %c", &choice);

		if(choice == 'a' & a == 'a')
			a = sign;
		else if(choice == 'b' && b == 'b')
			b = sign;
		else if(choice == 'c' && c == 'c')
			c = sign;
		else if(choice == 'd' && d == 'd')
			d = sign;
		else if(choice == 'e' && e == 'e')
			e = sign;
		else if(choice == 'f' && f == 'f')
			f = sign;
		else if(choice == 'g' && g == 'g')
			g = sign;
		else if(choice == 'h' && h == 'h')
			h = sign;
		else if(choice == 'i' && i == 'i')
			i = sign;
		else if(choice == 'j' && j == 'j')
			j = sign;
		else if(choice == 'k' && k == 'k')
			k = sign;
		else if(choice == 'l' && l == 'l')
			l = sign;
		else if(choice == 'm' && m == 'm')
			m = sign;
		else if(choice == 'n' && n == 'n')
			n = sign;
		else if(choice == 'o' && o == 'o')
			o = sign;
		else if(choice == 'p' && p == 'p')
			p = sign;
		else if(choice == 'q' && q == 'q')
			q = sign;
		else if(choice == 'r' && r == 'r')
			r = sign;
		else if(choice == 's' && s == 's')
			s = sign;
		else if(choice == 't' && t == 't')
			t = sign;
		else if(choice == 'u' && u == 'u')
			u = sign;
		else if(choice == 'v' && v == 'v')
			v = sign;
		else if(choice == 'w' && w == 'w')
			w = sign;
		else if(choice == 'x' && x == 'x')
			x = sign;
		else if(choice == 'y' && y == 'y')
			y = sign;
		else
		{
			isValidMove = false;
			printf("Player %c is not a valid option. \n", choice);
		}
	}
	while (!isValidMove);
}

int getPlayerNumber(int player)
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

void getSign(int player)
{	
	sign = 'X';
	if(player == 1)
	{
		sign = 'O';
	}
}

int isValidChoice(int player, int choice)
{

	if(player == 1)
	{
		if(choice == player1Abilities[choice])
		{
			player1Abilities[choice] = 0;
			if(choice == 9)
			{
				player1Abilities[choice] = 9;
				return true;
			}
			return true;
		}
		else
		{
			return false;
		}

	}
	else if(player == 2)
	{
		if(choice == player2Abilities[choice])
		{
			player2Abilities[choice] = 0;
			if(choice == 9)
			{
				player2Abilities[choice] = 9;
				return true;
			}
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return true;
	}


}

int showPlayerOptionsAndGetChoice(int player)
{
	char choice;
	int isValid;

	printf("Player %d, enter your move : (e.g. 1 or 2)\n", player);
	printf("1. Take 2 Turns \n");
	printf("2. Flip space \n");
	printf("3. Blank four corners and center \n");
	printf("4. Free Row \n");
	printf("5. Opponent chooses 3 for you \n");
	printf("6. Even it out \n");
	printf("7. Delete Ability \n");
	printf("8. Counter \n");
	printf("9. Normal Turn \n");

	do
	{
		scanf("%d", &choice);
		isValid = isValidChoice(player, choice);

		if (!isValid)
		{
			printf("Player %d, you have made an invalid choise. \n", player);
			printf("Player %d, enter your move : \n", player);
		}
	}
	while (!isValid);

	return choice;
}

int showPlayerOptionsAndGetChoiceHidden(int player)
{
	char choice;
	int isValid;

	printf("Player %d, enter your move : (e.g. 1 or 2)\n", player);
	printf("1. Ability 1 \n");
	printf("2. Ability 2 \n");
	printf("3. Ability 3 \n");
	printf("4. Ability 4 \n");
	printf("5. Ability 5 \n");
	printf("6. Ability 6 \n");
	printf("7. Ability 7 \n");
	printf("8. Ability 8 \n");
	printf("9. Ability 9 \n");

	do
	{
		scanf("%d", &choice);
		isValid = isValidChoice(player, choice);

		if (!isValid)
		{
			printf("Player %d, you have made an invalid choise. \n", player);
			printf("Player %d, enter your move : \n", player);
		}
	}
	while (!isValid);

	return choice;
}

void take2Turns(int player)
{
	getNormalMove(player);
	getNormalMove(player);
}

void flipSpace(int player)
{
	char choice;
	int isValidMove;

	do
	{
		isValidMove = true;

		printf("Player %d, enter the move you want to take: \n", player);
		scanf(" %c", &choice);

		if(choice == 'a')
			if(player == 2)
			{
				a = 'X';
			}
			else
			{
				a = 'O';
			}
		else if(choice == 'b')
			if(player == 2)
			{
				b = 'X';
			}
			else
			{
				b = 'O';
			}
		else if(choice == 'c')
			if(player == 2)
			{
				c = 'X';
			}
			else
			{
				c = 'O';
			}
		else if(choice == 'd')
			if(player == 2)
			{
				d = 'X';
			}
			else
			{
				d = 'O';
			}
		else if(choice == 'e')
			if(player == 2)
			{
				e = 'X';
			}
			else
			{
				e = 'O';
			}
		else if(choice == 'f')
			if(player == 2)
			{
				f = 'X';
			}
			else
			{
				f = 'O';
			}
		else if(choice == 'g')
			if(player == 2)
			{
				g = 'X';
			}
			else
			{
				g = 'O';
			}
		else if(choice == 'h')
			if(player == 2)
			{
				h = 'X';
			}
			else
			{
				h = 'O';
			}
		else if(choice == 'i')
			if(player == 2)
			{
				i = 'X';
			}
			else
			{
				i = 'O';
			}
		else if(choice == 'j')
			if(player == 2)
			{
				j = 'X';
			}
			else
			{
				j = 'O';
			}
		else if(choice == 'k')
			if(player == 2)
			{
				k = 'X';
			}
			else
			{
				k = 'O';
			}
		else if(choice == 'l')
			if(player == 2)
			{
				l = 'X';
			}
			else
			{
				l = 'O';
			}
		else if(choice == 'm')
			if(player == 2)
			{
				m = 'X';
			}
			else
			{
				m = 'O';
			}
		else if(choice == 'n')
			if(player == 2)
			{
				n = 'X';
			}
			else
			{
				n = 'O';
			}
		else if(choice == 'o')
			if(player == 2)
			{
				o = 'X';
			}
			else
			{
				o = 'O';
			}
		else if(choice == 'p')
			if(player == 2)
			{
				p = 'X';
			}
			else
			{
				p = 'O';
			}
		else if(choice == 'q')
			if(player == 2)
			{
				q = 'X';
			}
			else
			{
				q = 'O';
			}
		else if(choice == 'r')
			if(player == 2)
			{
				r = 'X';
			}
			else
			{
				r = 'O';
			}
		else if(choice == 's')
			if(player == 2)
			{
				s = 'X';
			}
			else
			{
				s = 'O';
			}
		else if(choice == 't')
			if(player == 2)
			{
				t = 'X';
			}
			else
			{
				t = 'O';
			}
		else if(choice == 'u')
			if(player == 2)
			{
				u = 'X';
			}
			else
			{
				u = 'O';
			}
		else if(choice == 'v')
			if(player == 2)
			{
				v = 'X';
			}
			else
			{
				v = 'O';
			}
		else if(choice == 'w')
			if(player == 2)
			{
				w = 'X';
			}
			else
			{
				w = 'O';
			}
		else if(choice == 'x')
			if(player == 2)
			{
				x = 'X';
			}
			else
			{
				x = 'O';
			}
		else if(choice == 'y')
			if(player == 2)
			{
				y = 'X';
			}
			else
			{
				y = 'O';
			}
		else
		{
			isValidMove = false;
			printf("Player %c is not a valid option. \n", choice);
		}
	}
	while (!isValidMove);
}

void blankFourCornersAndCenter()
{
	a = 'a';
	e = 'e';
	m = 'm';
	u = 'u';
	y = 'y';
}

void freeRow()
{
	char freeup1, freeup2;

	printf("Enter 2 of your occupied spaces in the same row \n");
	freeup1 = getche();
	printf("\n");
	freeup2 = getche();
	printf("\n");
	
	if ((freeup1 == 'a' && a == sign) || (freeup1 == 'b' && b == sign) || (freeup1 == 'c' && c == sign) || (freeup1 == 'd' && d == sign) || (freeup1 == 'e' && e == sign)) 
	{
		if(freeup2 == 'a' && a == sign || freeup2 == 'b' && b == sign || freeup2 == 'c' && c == sign || freeup2 == 'd' && d == sign ||freeup2 == 'e' && e == sign)
		{
			if(a != sign)
			{
				a = 'a';
			}
	
			if(b != sign)
			{
				b = 'b';
			}
	
			if(c != sign)
			{
				c = 'c';
			}
	
			if(d != sign)
			{
				d = 'd';
			}
	
			if(e != sign)
			{
				e = 'e';
			}
		}
	}
	else if (freeup1 == 'f' || freeup1 == 'g' || freeup1 == 'h' || freeup1 == 'i' ||freeup1 == 'j' )
	{
		if (freeup2 == 'f' || freeup2 == 'g' || freeup2 == 'h' || freeup2 == 'i' ||freeup2 == 'j' )
		{
			if(f != sign)
			{
				f = 'f';
			}
	
			if(g != sign)
			{
				g = 'g';
			}
	
			if(h != sign)
			{
				h = 'h';
			}
	
			if(i != sign)
			{
				i = 'i';
			}
	
			if(j != sign)
			{
				j = 'j';
			}
		}

	}
	else if (freeup1 == 'k' || freeup1 == 'l' || freeup1 == 'm' || freeup1 == 'n' ||freeup1 == 'o' )
	{
		if (freeup2 == 'k' || freeup2 == 'l' || freeup2 == 'm' || freeup2 == 'n' ||freeup2 == 'o' )
		{
			if(k != sign)
			{
				k = 'k';
			}
	
			if(l != sign)
			{
				l = 'l';
			}
	
			if(g != sign)
			{
				m = 'm';
			}
	
			if(n != sign)
			{
				n = 'n';
			}
	
			if( o != sign)
			{
				o = 'o';
			}
		}
	}
	else if (freeup1 == 'p' || freeup1 == 'q' || freeup1 == 'r' ||freeup1 == 's' || freeup1 == 't')
	{
		if (freeup2 == 'p' || freeup2 == 'q' || freeup2 == 'r' ||freeup2 == 's' || freeup2 == 't')
		{
			if(p != sign)
			{
				p = 'p';
			}
	
			if(q != sign)
			{
				q = 'q';
			}
	
			if(r != sign)
			{
				r = 'r';
			}
	
			if(s != sign)
			{
				s = 's';
			}
	
			if(t != sign)
			{
				t = 't';
			}
		}
	}
	else if (freeup1 == 'u' || freeup1 == 'v' || freeup1 == 'w' || freeup1 == 'x' ||freeup1 == 'y' )
	{
		if (freeup2 == 'u' || freeup2 == 'v' || freeup2 == 'w' || freeup2 == 'x' ||freeup2 == 'y' )
		{
			if(u != sign)
			{
				u = 'u';
			}
	
			if(v != sign)
			{
				v = 'v';
			}
	
			if(w != sign)
			{
				w = 'w';
			}
	
			if(x != sign)
			{
				x = 'x';
			}
	
			if(y != sign)
			{
				y = 'y';
			}
		}
	}
	else
	{
		printf("Input error, should be in the same row \n");
	}
}

void letOpponentChoose(int player)
{
	if(player == 1)
	{
		player = 2;
		getNormalMove(player);
		drawBoard();
		getNormalMove(player);
		drawBoard();		
		getNormalMove(player);

	}
	else
	{
		player = 1;
		getNormalMove(player);
		drawBoard();
		getNormalMove(player);
		drawBoard();
		getNormalMove(player);
	}

}

int checkForO(int nOCount)
{
	if(a == 'O')
		nOCount++;

	if(b == 'O')
		nOCount++;

	if(c == 'O')
		nOCount++;

	if(d == 'O')
		nOCount++;

	if(e == 'O')
		nOCount++;

	if(f == 'O')
		nOCount++;

	if(g == 'O')
		nOCount++;

	if(h == 'O')
		nOCount++;

	if(i == 'O')
		nOCount++;

	if(j == 'O')
		nOCount++;

	if(k == 'O')
		nOCount++;

	if(l == 'O')
		nOCount++;

	if(m == 'O')
		nOCount++;

	if(n == 'O')
		nOCount++;

	if(o == 'O')
		nOCount++;

	if(p == 'O')
		nOCount++;

	if(q == 'O')
		nOCount++;

	if(r == 'O')
		nOCount++;

	if(s == 'O')
		nOCount++;

	if(t == 'O')
		nOCount++;

	if(u == 'O')
		nOCount++;

	if(v == 'O')
		nOCount++;

	if(w == 'O')
		nOCount++;

	if(x == 'O')
		nOCount++;

	if(y == 'O')
		nOCount++;

	return nOCount;
}

int checkForX(int nXCount)
{
	if(a == 'X')
		nXCount++;

	if(b == 'X')
		nXCount++;

	if(c == 'X')
		nXCount++;

	if(d == 'X')
		nXCount++;

	if(e == 'X')
		nXCount++;

	if(f == 'X')
		nXCount++;

	if(g == 'X')
		nXCount++;

	if(h == 'X')
		nXCount++;

	if(i == 'X')
		nXCount++;

	if(j == 'X')
		nXCount++;

	if(k == 'X')
		nXCount++;

	if(l == 'X')
		nXCount++;

	if(m == 'X')
		nXCount++;

	if(n == 'X')
		nXCount++;

	if(o == 'X')
		nXCount++;

	if(p == 'X')
		nXCount++;

	if(q == 'X')
		nXCount++;

	if(r == 'X')
		nXCount++;

	if(s == 'X')
		nXCount++;

	if(t == 'X')
		nXCount++;

	if(u == 'X')
		nXCount++;

	if(v == 'X')
		nXCount++;

	if(w == 'X')
		nXCount++;

	if(x == 'X')
		nXCount++;

	if(y == 'X')
		nXCount++;

	return nXCount;
}

void evenItOut(int player)
{
	int nXCount = 0, nOCount = 0, nCount, z;
	char choice;

	nOCount = checkForO(nOCount);
	nXCount = checkForX(nXCount);



	if(player == 1)
	{
		if(nOCount < nXCount)
		{
			nCount = nXCount - nOCount;
			while(nCount != 0)
			{
				printf("Player %d, place to remove: \n", player);
				scanf(" %c", &choice);

				if(choice == 'a' & a == 'X')
				{
					a = 'a';
					nCount--;
					drawBoard();
				}
				else if(choice == 'b' && b == 'X')
				{
					b = 'b';
					nCount--;
					drawBoard();
				}
				else if(choice == 'c' && c == 'X')
				{
					c = 'c';
					nCount--;
					drawBoard();
				}
				else if(choice == 'd' && d == 'X')
				{
					d = 'd';
					nCount--;
					drawBoard();
				}
				else if(choice == 'e' && e == 'X')
				{
					e = 'e';
					nCount--;
					drawBoard();
				}
				else if(choice == 'f' && f == 'X')
				{
					f = 'f';
					nCount--;
					drawBoard();
				}
				else if(choice == 'g' && g == 'X')
				{
					g = 'g';
					nCount--;
					drawBoard();
				}
				else if(choice == 'h' && h == 'X')
				{
				
					h = 'h';
					nCount--;
					drawBoard();
				}
				else if(choice == 'i' && i == 'X')
				{
					i = 'i';
					nCount--;
					drawBoard();
				}
				else if(choice == 'j' && j == 'X')
				{
					j = 'j';
					nCount--;
					drawBoard();
				}
				else if(choice == 'k' && k == 'X')
				{
					k = 'k';
					nCount--;
					drawBoard();
				}
				else if(choice == 'l' && l == 'X')
				{
					l = 'l';
					nCount--;
					drawBoard();
				}
				else if(choice == 'm' && m == 'X')
				{
					m = 'm';
					nCount--;
					drawBoard();
				}
				else if(choice == 'n' && n == 'X')
				{
					n = 'n';
					nCount--;
					drawBoard();
				}
				else if(choice == 'o' && o == 'X')
				{
					o = 'o';
					nCount--;
					drawBoard();
				}
				else if(choice == 'p' && p == 'X')
				{
					p = 'p';
					nCount--;
					drawBoard();
				}
				else if(choice == 'q' && q == 'X')
				{
					q = 'q';
					nCount--;
					drawBoard();
				}
				else if(choice == 'r' && r == 'X')
				{
					r = 'r';
					nCount--;
					drawBoard();
				}
				else if(choice == 's' && s == 'X')
				{
					s = 's';
					nCount--;
					drawBoard();
				}
				else if(choice == 't' && t == 'X')
				{
					t = 't';
					nCount--;
					drawBoard();
				}
				else if(choice == 'u' && u == 'X')
				{
					u = 'u';
					nCount--;
					drawBoard();
				}
				else if(choice == 'v' && v == 'X')
				{
					v = 'v';
					nCount--;
					drawBoard();
				}
				else if(choice == 'w' && w == 'X')
				{				
					w = 'w';
					nCount--;
					drawBoard();
				}
				else if(choice == 'x' && x == 'X')
				{
					x = 'x';
					nCount--;
					drawBoard();
				}
				else if(choice == 'y' && y == 'X')
				{
					y = 'y';
					nCount--;
					drawBoard();
				}
				else
					printf("place not taken \n");
			}
		}
		else
		{
			printf("You have more occupied spaces than Player 2");
			player1Abilities[6] = 6; 
		} 

	}
	else if(player == 2)
	{
		if(nXCount < nOCount)
		{
			nCount = nOCount - nXCount;
			while(nCount != 0)
			{
				printf("Player %d, place to remove: \n", player);
				scanf(" %c", &choice);

				if(choice == 'a' & a == 'O')
				{
					a = 'a';
					nCount--;
					drawBoard();
				}
				else if(choice == 'b' && b == 'O')
				{
					b = 'b';
					nCount--;
					drawBoard();
				}
				else if(choice == 'c' && c == 'O')
				{
					c = 'c';
					nCount--;
					drawBoard();
				}
				else if(choice == 'd' && d == 'O')
				{
					d = 'd';
					nCount--;
					drawBoard();
				}
				else if(choice == 'e' && e == 'O')
				{
					e = 'e';
					nCount--;
					drawBoard();
				}
				else if(choice == 'f' && f == 'O')
				{
					f = 'f';
					nCount--;
					drawBoard();
				}
				else if(choice == 'g' && g == 'O')
				{
					g = 'g';
					nCount--;
					drawBoard();
				}
				else if(choice == 'h' && h == 'O')
				{
				
					h = 'h';
					nCount--;
					drawBoard();
				}
				else if(choice == 'i' && i == 'O')
				{
					i = 'i';
					nCount--;
					drawBoard();
				}
				else if(choice == 'j' && j == 'O')
				{
					j = 'j';
					nCount--;
					drawBoard();
				}
				else if(choice == 'k' && k == 'O')
				{
					k = 'k';
					nCount--;
					drawBoard();
				}
				else if(choice == 'l' && l == 'O')
				{
					l = 'l';
					nCount--;
					drawBoard();
				}
				else if(choice == 'm' && m == 'O')
				{
					m = 'm';
					nCount--;
					drawBoard();
				}
				else if(choice == 'n' && n == 'O')
				{
					n = 'n';
					nCount--;
					drawBoard();
				}
				else if(choice == 'o' && o == 'O')
				{
					o = 'o';
					nCount--;
					drawBoard();
				}
				else if(choice == 'p' && p == 'O')
				{
					p = 'p';
					nCount--;
					drawBoard();
				}
				else if(choice == 'q' && q == 'O')
				{
					q = 'q';
					nCount--;
					drawBoard();
				}
				else if(choice == 'r' && r == 'O')
				{
					r = 'r';
					nCount--;
					drawBoard();
				}
				else if(choice == 's' && s == 'O')
				{
					s = 's';
					nCount--;
					drawBoard();
				}
				else if(choice == 't' && t == 'O')
				{
					t = 't';
					nCount--;
					drawBoard();
				}
				else if(choice == 'u' && u == 'O')
				{
					u = 'u';
					nCount--;
					drawBoard();
				}
				else if(choice == 'v' && v == 'O')
				{
					v = 'v';
					nCount--;
					drawBoard();
				}
				else if(choice == 'w' && w == 'O')
				{				
					w = 'w';
					nCount--;
					drawBoard();
				}
				else if(choice == 'x' && x == 'O')
				{
					x = 'x';
					nCount--;
					drawBoard();
				}
				else if(choice == 'y' && y == 'O')
				{
					y = 'y';
					nCount--;
					drawBoard();
				}
				else
					printf("place not taken \n");
			}
		}
		else
		{
			printf("You have more occupied spaces than Player 2");
			player2Abilities[6] = 6; 
		} 
	}
}

void deleteAbility(int player)
{
	int choice;

	printf("What abilitiy would you like to delete? ");
	scanf("%d", &choice);
	if(player == 1)
	{
		if(choice == player2Abilities[choice])
		{
			player2Abilities[choice] = 0;

			if(choice == 9)
			{
				printf("You cannot delete a normal move ");

			}
		}
	}

	if(player == 2)
	{
		if(choice == player1Abilities[choice])
		{
			player1Abilities[choice] = 0;

			if(choice == 9)
			{
				printf("You cannot delete a normal move ");
			}
		}
	}

}


int counter(int player, char choice)
{
	char cChoice;
	
	if(player == 1)
	{
		player = 2; 
		printf("Player %d do you want to counter the move? (y/n)\n", player);
		cChoice = getchar();
		
		if(cChoice == 'y' || cChoice == 'Y')
		{
			player1Abilities[choice] = 0;
			return 1;
		}
		else 
		{
			return 0;
		}
	}
	else
	{
		player = 1;
		printf("Player %d do you want to counter the move? (y/n) \n", player);
		cChoice = getchar();
		
		if(cChoice == 'y' || cChoice == 'Y')
		{
			player2Abilities[choice] = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
}



void processChoice(int player, char choice)
{
	int checkCounter;
	if(choice == 1)
	{
		checkCounter = counter(player, choice);
		
		if(checkCounter == 0)
		{
			take2Turns(player);
		}
		else if(checkCounter == 1)
		{
			printf("You have been countered \n");
			getNormalMove(player);
		}
	}
	else if(choice == 2)
	{
		flipSpace(player);
	}
	else if(choice == 3)
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

	}
	else if(choice == 9)
	{
		getNormalMove(player);
	}
}

void showGameResult(int gameResult)
{
	if (gameResult == 1)
		printf("==>\aPlayer %d win ", --player);
	else
		printf("==>\aGame draw");
}

int checkWin()
{

	if(a == b && b == c && c == d && d == e)
	{
		return 1;
	}
	else if(f == g && g == h && h == i && i == j)
	{
		return 1;
	}
	else if(k == l && l == m && m == n && n == o)
	{
		return 1;
	}
	else if(p == q && q == r && r == s && s == t)
	{
		return 1;
	}
	else if(u == v && v == w && w == x && x == y)
	{
		return 1;
	}
	else if(a == f && f == k && k == p && p == u)
	{
		return 1;
	}
	else if(b == g && g == l && l == q && q == v)
	{
		return 1;
	}
	else if(c == h && h == m && m == r && r == w)
	{
		return 1;
	}
	else if(d == i && i == n && n == s && s == x)
	{
		return 1;
	}
	else if(e == j && j == o && o == t && t == y)
	{
		return 1;
	}
	else if(a == g && g == m && m == s && s == y)
	{
		return 1;
	}
	else if(e == i && i == m && m == q && q == u)
	{
		return 1;
	}
	else if(a != 'a'&& b != 'b'&& c != 'c'&& d != 'd'&& e != 'e'&& f != 'f'&& g != 'g'&& h != 'h'&& i != 'i'&& j != 'j'&& k != 'k'&& l != 'l' && m != 'm'&&
	        n != 'n'&& o != 'o'&& p != 'p'&& q != 'q'&& r != 'r'&& s != 's'&& t != 't'&& u != 'u'&& v != 'v'&& w != 'w'&& x != 'x'&& y != 'y')
	{
		return 0;
	}
	else
	{
		return - 1;
	}

}

int checkAbility()
{
	int checkIfHide;
	
	printf("Would you like to hide the abilities? (y/n)\n");
	scanf("%c", &checkIfHide);
	
	return checkIfHide;
}

int main()
{

	int gameResult;
	char choice, checkIfHide;
	
	checkIfHide = checkAbility();


	do
	{
		drawBoard();

		player = getPlayerNumber(player);
		getSign(player);
		
		if(checkIfHide == 'y'|| checkIfHide == 'Y')
		{
			choice = showPlayerOptionsAndGetChoiceHidden(player);	
		}
		else
		{
			choice = showPlayerOptionsAndGetChoice(player);
		}
		processChoice(player, choice);
		
		gameResult = checkWin();


		player++;
	}
	while(gameResult == - 1);

	drawBoard();
	showGameResult(gameResult);

	getch();

	return 0;
}
