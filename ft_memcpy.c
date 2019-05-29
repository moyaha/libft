/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoyaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:39:07 by pmoyaha           #+#    #+#             */
/*   Updated: 2019/05/29 15:09:47 by pmoyaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*dp;
	const char	*sp;

	i = 0;
	dp = (char *)dst;
	sp = (char *)src;
	while (n--)
	{
		*dp = *sp;
		dp++;
		sp++;
	}
	return (dst);
}
