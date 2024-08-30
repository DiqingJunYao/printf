/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 00:00:06 by dyao              #+#    #+#             */
/*   Updated: 2024/06/27 00:00:06 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexnbr(unsigned int nb, char specifier)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += ft_hexnbr(nb / 16, specifier);
		count += ft_hexnbr(nb % 16, specifier);
	}
	else
	{
		if (nb < 10)
			count += ft_putchar(nb + 48);
		else if (specifier == 'X')
			count += ft_putchar(nb + 55);
		else if (specifier == 'x')
			count += ft_putchar(nb + 87);
	}
	return (count);
}
