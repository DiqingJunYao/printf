/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:32:42 by dyao              #+#    #+#             */
/*   Updated: 2024/06/27 00:04:02 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "ft_printf.h"

int	ft_unsigned(unsigned int nb)
{
	size_t			i;

	i = 0;
	if (nb >= 10)
		i += ft_unsigned(nb / 10);
	i += ft_putchar((nb % 10) + '0');
	return (i);
}
