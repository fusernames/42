
#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[] = "12345";
	char dest[] = "abdki";
	ft_strncpy(dest, src, 2);
	printf("%s\n", dest);
	return (0);
}
