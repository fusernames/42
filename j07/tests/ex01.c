#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int i = 0;
	int *tab;
	
	tab = ft_range(20, 100);
	while (i < 100)
	{
		printf("%d\t ", tab[i]);
		i++;
	}
	return (0);
}
