/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbun <mbun@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:03:27 by mbun              #+#    #+#             */
/*   Updated: 2023/10/03 09:03:27 by mbun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int number)
{
	int	count;

	count = 0;
	if (number == INT_MIN)
		return (write(1, "-2147483648", 11));
	if (number < 0)
	{
		count += ft_putchar('-');
		number = -number;
	}
	if (number < 10)
		count += ft_putchar(number + 48);
	else
	{
		count += ft_putnbr(number / 10);
		count += ft_putnbr(number % 10);
	}
	return (count);
}
