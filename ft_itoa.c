/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubaglan <ubaglan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:08:29 by ubaglan           #+#    #+#             */
/*   Updated: 2022/10/31 15:10:22 by ubaglan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long n)
{
	int		size;

	size = 0;
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*d;
	int		i;
	long	n2;

	n2 = (long)n;
	d = (char *)malloc(len(n2) + 1);
	if (!d)
		return (NULL);
	i = len(n2) - 1;
	d[i + 1] = '\0';
	if (n2 < 0)
	{
		n2 *= -1;
		d[0] = '-';
	}
	if (n2 == 0)
		d[0] = '0';
	while (n2 >= 1)
	{
		d[i] = (n2 % 10) + '0';
		n2 = n2 / 10;
		i--;
	}
	return (d);
}
