/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbun <mbun@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:02:52 by mbun              #+#    #+#             */
/*   Updated: 2023/10/03 09:02:52 by mbun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexnbr(unsigned int number, char is_register)
{
	int	count;

	count = 0;
	if (number >= 16)
	{
		count += ft_hexnbr(number / 16, is_register);
		count += ft_hexnbr(number % 16, is_register);
	}
	else
	{
		if (number < 10)
			count += ft_putchar(number + 48);
		else if (is_register == 'X')
			count += ft_putchar(number + 55);
		else if (is_register == 'x')
			count += ft_putchar(number + 87);
	}
	return (count);
}
