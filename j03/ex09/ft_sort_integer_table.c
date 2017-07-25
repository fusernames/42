/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 11:16:42 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/10 14:43:26 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_copy_table(int *tab, int *temp, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		temp[i] = tab[i];
		i++;
	}
}

void	ft_delete_index(int *temp, int size, int min_index)
{
	while (min_index < (size - 1))
	{
		temp[min_index] = temp[min_index + 1];
		min_index++;
	}
}

void	ft_is_min(int *temp, int i, int *min)
{
	if (temp[i] < min[1])
	{
		min[1] = temp[i];
		min[0] = i;
	}
}

void	ft_sort_integer_table(int *tab, int size)
{
	int temp[size];
	int i;
	int j;
	int min[2];

	ft_copy_table(tab, temp, size);
	j = 0;
	while (size > 0)
	{
		i = 0;
		min[1] = temp[0];
		min[0] = 0;
		while (i < size)
		{
			ft_is_min(temp, i, min);
			if (i == (size - 1))
			{
				tab[j] = min[1];
				j++;
				ft_delete_index(temp, size, min[0]);
			}
			i++;
		}
		size--;
	}
}
