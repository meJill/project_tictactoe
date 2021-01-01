#include <stdio.h>
#include <conio.h>



char a = 'a', b = 'b', c = 'c', d = 'd', e = 'e', f = 'f', g = 'g', h = 'h', i = 'i', j = 'j', k = 'k', l = 'l' , m = 'm',
	n = 'n', o = 'o', p = 'p', q = 'q', r = 'r', s = 's', t = 't', u = 'u', v = 'v', w = 'w', x = 'x', y = 'y';

	
	
void board()
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


int Win()
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

int normal(char choice, int player, char sign)
{	

			}


int main()
{
	int player = 1, z;
	int yn;
	char choice, sign, box_choice;
	
	do{ 
	
		board();
		player = (player % 2);
		if(player != 0)
		{
			player = 1;
		}
		else
		{
			player = 2;
		}
		
			if(player == 1)
		{
			sign = 'O';
		}
		else
		{
			sign = 'X';
		}
		
		printf("Player %d, enter your move : \n", player);
		scanf("%c", &choice);
		
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
			player--;
			printf("Input incorrect \n");
			getchar();

		
		
		z = Win();
		
		player++;
		
		}while(z == - 1 );

		board();
		
		if (z == 1)
	        printf("==>\aPlayer %d win ", --player);
	    else
	        printf("==>\aGame draw");
	
	    getch();
	
	    return 0;
	}


	
		

	







