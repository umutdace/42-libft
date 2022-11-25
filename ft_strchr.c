/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubaglan <ubaglan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:29:41 by ubaglan           #+#    #+#             */
/*   Updated: 2022/10/10 18:08:30 by ubaglan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((unsigned char)s [i] != (unsigned char)c && s[i])
		i++;
	if ((unsigned char)s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (0);
}
