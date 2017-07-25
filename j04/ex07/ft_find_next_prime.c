/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 10:56:04 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/14 16:42:05 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long i;

	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 6;
	while (i * i - 2 * i + 1 <= nb)
	{
		if (nb % (i - 1) == 0)
			return (0);
		if (nb % (i + 1) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return(2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
