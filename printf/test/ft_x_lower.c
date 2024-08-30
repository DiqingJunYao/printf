/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_lower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:48:48 by dyao              #+#    #+#             */
/*   Updated: 2024/06/24 16:01:34 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x(va_list a)
{
	long int	store;
	char		*arry;

	store = va_arg(a, long int);
	arry = ft_itoa_base_low(store);
	store = 0;
	while (arry[store])
	{
		ft_putchar(arry[store]);
		store++;
	}
	return (store);
}
