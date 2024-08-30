/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_upper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 21:55:07 by dyao              #+#    #+#             */
/*   Updated: 2024/06/24 16:01:49 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x_upper(va_list a)
{
	long int	store;
	char		*arry;

	store = va_arg(a, long int);
	arry = ft_itoa_base_upr(store);
	store = 0;
	while (arry[store])
	{
		ft_putchar(arry[store]);
		store++;
	}
	return (store);
}
