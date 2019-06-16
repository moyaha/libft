/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoyaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:39:07 by pmoyaha           #+#    #+#             */
/*   Updated: 2019/06/16 13:32:38 by pmoyaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*dest;
	const char	*source;
	int			x;

	i = 0;
	dest = (char *)dst;
	source = (const char *)src;
	x = (int)n;
	while (i < x)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}
