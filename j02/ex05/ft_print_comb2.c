/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:47:42 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/09 09:28:34 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_comb_putchar(int a, int b)
{
	int w;
	int x;
	int y;
	int z;

	if (a < b)
	{
		w = (a / 10) % 10;
		x = (a / 1) % 10;
		y = (b / 10) % 10;
		z = (b / 1) % 10;
		ft_putchar(w + '0');
		ft_putchar(x + '0');
		ft_putchar(' ');
		ft_putchar(y + '0');
		ft_putchar(z + '0');
		if (a != 98 || b != 99)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a < 100)
	{
		b = 0;
		while (b < 100)
		{
			ft_comb_putchar(a, b);
			b++;
		}
		a++;
	}
}
