#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(void)
{	
	int a;
	int b;

	a = 5;
	b = 6;

	ft_swap(&a, &b);
	printf("%d, %d", a, b);
	return(0);
}
