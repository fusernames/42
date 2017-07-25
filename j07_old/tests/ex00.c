#include <stdio.h>
#include <string.h>

char	*ft_strdup(char * src);

int		main(void)
{
	char	tab[] = "tesstt";
	char	*cpy;
	int		i;

	cpy = ft_strdup(tab);
	i = 0;
	printf("%s", cpy);
	return (0);
}
