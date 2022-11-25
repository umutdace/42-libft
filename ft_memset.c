/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubaglan <ubaglan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:51:49 by ubaglan           #+#    #+#             */
/*   Updated: 2022/10/15 14:33:34 by ubaglan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t len)
{
	size_t			i;
	unsigned char	*new_dst;

	i = 0;
	new_dst = (unsigned char *)dst;
	while (i < len)
	{
		new_dst[i] = (unsigned char)c;
		i++;
	}
	return (dst);
}
