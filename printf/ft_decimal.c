/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:55:38 by dyao              #+#    #+#             */
/*   Updated: 2024/06/26 23:59:59 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal(va_list a)
{
	long long	nb;
	char		*store;

	nb = va_arg(a, long long);
	store = ft_itoa(nb);
	nb = 0;
	while (store[nb])
	{
		ft_putchar(store[nb]);
		nb++;
	}
	free(store);
	return (nb);
}
