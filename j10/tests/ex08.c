#include <stdio.h>

void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char*, char*));

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int i;

	ft_advanced_sort_wordtab(argv, &ft_strcmp);
	argc = 0;
	i = 0;
	while(argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
}
