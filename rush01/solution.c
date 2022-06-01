#include<stdio.h>

void ft_Rswap(int tab[4][4],int a);
void ft_Cswap(int tab[4][4],int c);
int	solve(int tab[4][4], int entry[16]);
int	ft_linecheck(int tab[4][4], int entry[16]); 

int main()
{
	int tab[4][4] = {
		{1,2,3,4},
		{4,1,2,3},
		{3,4,1,2},
		{2,3,4,1},
	};

	int entry[16] = {2,2,4,1,2,2,1,4,3,1,2,2,1,2,3,2};
	int value;
	int n = -1;

	value = solve(tab, entry);

	if(value == 0)
		printf("error");
	else
		while ( ++n < 4)
		{
			printf("%d %d %d %d\n",tab[n][0],tab[n][1],tab[n][2],tab[n][3]);
		}
	return 0;
}


void	ft_Rswap(int tab[4][4],int a)
{
	int rowswap[4];
	int n;
	int i;
	int b;

	b = a + 1;
	n = -1;
	while (++n < 4)
		rowswap[n]  = tab[a][n];
	n = -1;
	while (++n < 4)
		tab[a][n] = tab[b][n];
	n = -1;
	while (++n < 4)
		tab[b][n] = rowswap[n];
}

void	ft_Cswap(int tab[4][4], int c)
{
	int	collumnswap[4];
	int n;
	int i;
	int d;

	d = c + 1;
	n = -1;
	while ( ++n < 4)
		collumnswap[n] = tab[n][c];
	n = -1;
	while (++n < 4)
		tab[n][c] = tab[n][d];
	n = -1;
	while (++n < 4)
		tab[n][d] = collumnswap[n];
}

int	solve(int tab[4][4],int entry[16])
{
	int a;
	int c;

	a = -1;
	while ( ++a < 4)
	{
		if ( ft_linecheck(tab, entry) == 1)
			break;
		c = -1;
		ft_Rswap(tab, a);
		while ( ++c < 4)
		{	
			if ( ft_linecheck(tab, entry)  == 1)
				break;
			ft_Cswap(tab, c);
			if ( ft_linecheck(tab, entry)  == 1)
				break;
		}
	}
	return 1;
}

int ft_linecheck(int tab[4][4], int entry[16])
{
	int view;
	int i;
	int n;
	int a;
	int v;

	a = -1;
	n = -1;
	v = 0;
	while ( ++a < 4) /*top view check*/
	{
		view = 1;
		n = -1;
		while (++n < 3)
		{	
			if ( (tab[n][a] - tab[n+1][a]) < 0)
				view++;
		}
		if (entry[v] != view)
			return (0);
		v++;
	}
	a = -1;
	n = 4;
	while ( ++a < 4) /*btm view check*/
	{
		view = 1;
		while (--n > 0)
		{	
			if ( (tab[n][a] - tab[n-1][a]) < 0)
				view++;
		}
		if (entry[v] != view)
			return (0);
		v++;
	}
	a = -1;
	n = -1;
	while ( ++a < 4) /*left view check*/
	{
		view = 1;
		while (++n < 3)
		{	
			if ( (tab[a][n] - tab[a][n+1]) < 0)
				view++;
		}
		if (entry[v] != view)
			return (0);
		v++;
	}
	a = -1;
	n = 4;
	while ( ++a < 4) /*right view check*/
	{
		view = 1;
		while (--n > 0)
		{	
			if ( (tab[a][n] - tab[a][n-1]) < 0)
				view++;
		}
		if (entry[v] != view)
			return (0);
		v++;
	}
	return (1);
}
