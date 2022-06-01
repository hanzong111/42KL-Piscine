#include<stdio.h>

void ft_Rswap(int tab[4][4],int a);
void ft_Cswap(int tab[4][4],int c);
int	solve(int tab[4][4], int entry[16]);
int	ft_linecheck(int tab[4][4], int entry[16]); 
void	ft_right_check(int grid[4][4], int right);
int	ft_left_check(int grid[4][4],int left);
int		ft_check_top (int grid[4][4], int top, int column);
int		ft_check_down (int grid[4][4], int down, int column);



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


void	ft_right_check(int grid[4][4], int right)
{
	int		index;
	int		buildings_counter;
	int		ascending_count;

	building_counter = 1;
	ascending_count = grid[3];
	index = 2;
	while (i >= 0)
	{
		if (grid[index] > ascending_count)
		{
			buildings_counter++;
			ascending_count = grid[index];
		}
		index --;
	}
	if (buildings_counetr != right)
		return (0);
	return (1);
}

int	ft_left_check(int grid[4][4],int left)
{
	int	index;
	int	buildings_counter;
	int	max_size;

	index = 1;
	buildings_counter = 1;
	ascending_count = grid[0];
	while (index < 4)
	{
		if (grid[i] > ascending_count)
		{
			ascending_count = grid[i];
			buildings_counter ++;
		}
		i++
	}
	if (buildings_counter != left)
		return (0);
	return (1);
}

int		ft_check_top (int grid[4][4], int top, int column)
{
	int row_index;
	int buildings_counter;
	int max_size;

	row_index = 1;
	buildings_counter = 1;
	max_size =  grid[0][coulmn]
	while(row_index < 4)
	{
		if (max_size < grid[row_index][column])
		{
			max_size = grid[row_index][column];
			buildings_counter ++;
		}
		row_index++;
	}
	if (buildings_counter != top)
		return (0);
	return (1);
}

int		ft_check_down (int grid[4][4], int down, int column)
{
	int row_index;
	int buildings_counter;
	int max_size;

	row_index = 2;
	buildings_counter = 1;
	max_size =  grid[3][coulmn]
	while(row_index >= 0)
	{
		if (max_size < grid[row_index][column])
		{
			max_size = grid[row_index][column];
			buildings_counter ++;
		}
		row_index--;
	}
	if (buildings_counter != top)
		return (0);
	return (1);
}

int		ft_linecheck(int *data_lign, int view[16])
{
	int column;


	if (!ft_check_line_left(data_lign, left))
		return (0);
	if (!ft_check_line_right(data_lign, right))
		return (0);
	column = 0;
	while (column < 4){
		if (!ft_check_down (int **data_lign, down, column))
			return (0);
		if (!ft_check_top (int **data_lign, column))
			return (0);
		column ++;
	}
	return (1);
}