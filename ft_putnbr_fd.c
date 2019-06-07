/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoyaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 09:04:51 by pmoyaha           #+#    #+#             */
/*   Updated: 2019/06/07 14:34:15 by pmoyaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        ft_putstr_fd("-2147483648", fd);
    else if (n < 0)
    {
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(-n, fd);
     }
	else if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd(n % 10 + '0', fd);
	}
    else
        ft_putchar_fd(n + '0', fd);
}
