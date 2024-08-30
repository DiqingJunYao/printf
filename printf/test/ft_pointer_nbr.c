/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbun <mbun@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:03:00 by mbun              #+#    #+#             */
/*   Updated: 2023/10/03 09:03:00 by mbun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer_nbr(unsigned long int number)
{
	int	count;

	count = 0;
	if (number < 10)
	{
		count = count + ft_putchar(number + 48);
	}
	else if (number < 16)
	{
		count = count + ft_putchar(number + 87);
	}
	else
	{
		count += ft_pointer_nbr(number / 16);
		count += ft_pointer_nbr(number % 16);
	}
	return (count);
}
