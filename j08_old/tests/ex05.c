
#include <stdio.h>
#include "../ex05/ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av);

int		main(int argc, char **argv)
{
	t_stock_par	*params;
	int			i;
	int			j;

	params = ft_param_to_tab(argc, argv);
	i = 0;
	while(params[i].str != 0)
	{
		j = 0;
		printf("size : %d\n", params[i].size_param);
		printf("param : %s\n", params[i].str);
		printf("copy : %s\n", params[i].copy);
		while (params[i].tab[j] != 0)
		{
			printf("mot %d : %s\n", j, params[i].tab[j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
