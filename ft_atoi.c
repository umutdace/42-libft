/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubaglan <ubaglan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 08:04:03 by ubaglan           #+#    #+#             */
/*   Updated: 2022/10/31 10:47:10 by ubaglan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

static int	jump_space(char *str)
{
	int	index;

	index = 0;
	while (check_space(str[index]) == 1)
	{
		index++;
	}
	return (index);
}

int	ft_atoi(const char *str)
{
	int				index;
	int				k;
	unsigned long	number;

	index = 0;
	number = 0;
	k = 1;
	index = jump_space((char *)str);
	if (str[index] == '-')
		k = -1;
	if (str[index] == '-' || str[index] == '+')
		index++;
	while (str[index] >= '0' && str[index] <= '9')
	{
		number = number * 10 + (str[index] - '0');
		index ++;
	}
	if (number > 9223372036854775807 && k == 1)
		return (-1);
	else if (number > 9223372036854775807 && k == -1)
		return (0);
	return (number * k);
}
