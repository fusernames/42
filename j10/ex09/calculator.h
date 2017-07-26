/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 14:00:40 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/26 09:51:47 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALCULATOR_H
# define CALCULATOR_H

long			ft_add(long a, long b);
long			ft_sub(long a, long b);
long			ft_mul(long a, long b);
long			ft_div(long a, long b);
long			ft_mod(long a, long b);
long			ft_usage(long a, long b);

typedef struct	s_opp
{
	char	*op;
	long	(*fun)(long, long);
}				t_opp;

#endif
