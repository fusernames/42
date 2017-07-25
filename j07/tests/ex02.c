#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int i = 0;
	int *tab;

	printf("%d\n\n", ft_ultimate_range(&tab, 0, 100));
	while (i < 120)
	{
		printf("\t%d", tab[i]);
		i++;
	}
	return (0);
}
