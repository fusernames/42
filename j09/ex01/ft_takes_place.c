/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:16:08 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/13 19:41:32 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour >= 0 && hour <= 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		if (hour == 0 || hour == 24)
			printf("0.00 A.M. AND 1.00 P.M.\n");
		else if (hour == 12)
			printf("12.00 A.M. AND 1.00 P.M.\n");
		else if (hour > 12)
			printf("%d.00 P.M. AND %d.00 P.M.\n", hour - 12, hour - 11);
		else if (hour < 12)
			printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	}
}
