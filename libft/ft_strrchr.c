/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubaglan <ubaglan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:52:55 by ubaglan           #+#    #+#             */
/*   Updated: 2022/10/15 14:39:16 by ubaglan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t		i;

	i = ft_strlen((char *) str);
	while ((unsigned char)str[i] != (unsigned char)c && i > 0)
		i--;
	if (i >= 0)
	{
		if ((unsigned char) str[i] == (unsigned char) c)
			return ((char *)(str + i));
	}
	return (0);
}
