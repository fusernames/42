/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 14:09:05 by alcaroff          #+#    #+#             */
/*   Updated: 2017/07/25 11:30:31 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

int			check_x(char *s);
int			check_y(char *s);
int			is_rush00(char *s, int x, int y);
int			is_rush01(char *s, int x, int y);
int			is_rush02(char *s, int x, int y);
int			is_rush03(char *s, int x, int y);
int			is_rush04(char *s, int x, int y);

#endif
