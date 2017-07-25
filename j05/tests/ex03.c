
#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char src[] = "testwjdoejjefjew";
	char dest[] = "aaadjoejjwqleqeqwff";
	strcpy(dest, src);
	printf("%s", dest);
	//ft_strcpy(dest, src);
	//printf("%s", dest);
	return (0);
}
