/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 19:00:23 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/10 16:33:15 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_transform_to_positive(int nb)
{
	ft_putchar('-');
	if (nb == -2147483648)
	{
		ft_putchar('2');
		nb = nb + 2000000000;
	}
	nb = -nb;
	return (nb);
}

void	ft_putnbr(int nb)
{
	char	tab[99];
	int		i;

	i = 0;
	if (nb < 0)
		nb = ft_transform_to_positive(nb);
	if (nb == 0)
		ft_putchar('0');
	while (nb > 0)
	{
		tab[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		ft_putchar(tab[i]);
	}
}
