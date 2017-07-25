#include <stdio.h>

void	ft_sort_wordtab(char **tab);

int		main(int argc, char **argv)
{
	int i;

	ft_sort_wordtab(argv);
	argc = 0;
	i = 0;
	while(argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
}
