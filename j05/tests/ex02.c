#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	char str[] = "\n 4+2";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
	return (0);
}
