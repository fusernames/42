#include <stdio.h>
#include <string.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char str[] = "TessWJest";
	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}
