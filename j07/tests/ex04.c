#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	char	**ptr;
	int		j;

	j = 0;
	ptr = ft_split_whitespaces("2fAylYKi 		 7hxdpH 		 STyi3qDFg");
	//printf("%s", ptr[1][0]);
	while (ptr[j] != 0)
	{
		printf("tableau %d : %s\n", j, ptr[j]);
		j++;
	}
	return (0);
}
