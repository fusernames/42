/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 12:11:30 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/14 12:17:14 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if (i == j || j == k || i == k)
		return (0);
	else if ((i < j && i > k) || (i > j && i < k))
		return (i);
	else if ((j < i && j > k) || (j > i && j < k))
		return (j);
	else
		return (k);
}