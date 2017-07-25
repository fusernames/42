/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 12:39:26 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/20 10:53:11 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int min_cpy;

	min_cpy = min;
	if (min >= max)
	{
		range = 0;
		return (**range);
	}
	*range = (int *)malloc(sizeof(**range) * (max - min));
	i = 0;
	while (min_cpy < max)
	{
		range[0][i] = min_cpy;
		min_cpy++;
		i++;
	}
	return (max - min);
}
