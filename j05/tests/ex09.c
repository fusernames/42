#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char str[] = "BONJouR CECI 0ESTt uN Test";
	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}
