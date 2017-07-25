/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 18:12:52 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/07 13:22:10 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_comb_putchar(int i, int j, int k)
{
	if (k > j && j > i)
	{
		ft_putchar(i + '0');
		ft_putchar(j + '0');
		ft_putchar(k + '0');
		if (!(i == 7 && j == 8 && k == 9))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 10)
			{
				ft_comb_putchar(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
