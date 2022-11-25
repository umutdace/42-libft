/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubaglan <ubaglan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 08:04:03 by ubaglan           #+#    #+#             */
/*   Updated: 2022/10/22 14:48:30 by ubaglan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;

	if (!s)
		return (0);
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	sub_str = (char *)malloc(len + 1);
	if (!sub_str)
		return (0);
	if (ft_strlen(s) < start)
	{
		sub_str[0] = '\0';
		return (sub_str);
	}
	i = 0;
	while (i < len && s[start])
	{
		sub_str[i] = s[start];
		i++;
		start++;
	}
	sub_str[len] = '\0';
	return (sub_str);
}
