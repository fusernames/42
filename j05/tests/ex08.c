#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char str[] = "bonjour ceci 0est un Test";
	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}
