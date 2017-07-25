#include <unistd.h>
#include "../ex06/ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_par *par);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	t_stock_par	*params;
	int			i;

	i = 0;
	params = ft_param_to_tab(argc, argv);
	ft_show_tab(params);
}
