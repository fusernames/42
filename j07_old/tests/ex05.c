
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

int		main(void)
{
	char **strings;

	strings = ft_split_whitespaces("ceci est un test    AH  ");
	ft_print_words_tables(strings);
	return (0);
}
