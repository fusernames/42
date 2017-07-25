/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 16:24:47 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/19 12:10:46 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	inverse_index(int *tab, int *sort)
{
	int tmp;

	*sort = 0;
	tmp = tab[1];
	tab[1] = tab[0];
	tab[0] = tmp;
}

void	sort_by_ascii(int argc, char **argv, int *index)
{
	int		i;
	int		size;
	int		sort;

	size = argc;
	sort = 0;
	while (sort == 0)
	{
		sort = 1;
		size = argc;
		while (size > 1)
		{
			i = 2;
			while (i < argc)
			{
				if (ft_strcmp(argv[index[i - 1]], argv[index[i]]) > 0)
					inverse_index(&index[i - 1], &sort);
				i++;
			}
			size--;
		}
	}
}

int		main(int argc, char **argv)
{
	int	i;
	int j;
	int	index[999];

	i = 0;
	while (i < argc)
	{
		index[i] = i;
		i++;
	}
	sort_by_ascii(argc, argv, index);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[index[i]][j])
		{
			ft_putchar(argv[index[i]][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
