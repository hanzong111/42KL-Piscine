#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point point;
	t_point *p_point;
	set_point(&point);
	p_point = &point;
	printf("point.x: %d\n", point.x);
	printf("point.y: %d\n", point.y);
	printf("point->x: %d\n", p_point->x);
	printf("point->y: %d\n", p_point->y);
	printf("*(point).x %d\n", (*p_point).x);
	printf("*(point).y %d\n", (*p_point).y);
	return (0);
}