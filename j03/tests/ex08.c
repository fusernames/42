#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("%d\n", ft_atoi("42- test"));
	printf("%d\n\n", atoi("42- test"));
}
