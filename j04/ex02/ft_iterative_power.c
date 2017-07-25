/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 11:15:01 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/12 14:21:48 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int tmp;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	tmp = nb;
	while (power > 1)
	{
		nb *= tmp;
		power--;
	}
	return (nb);
}
