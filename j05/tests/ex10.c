#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str[] = "ReKt17+LOl MdR Mdr 4242l42";
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}
