/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbun <mbun@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:03:37 by mbun              #+#    #+#             */
/*   Updated: 2023/10/03 09:03:37 by mbun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unnbr(unsigned int number)
{
	int	count;

	count = 0;
	if (number < 10)
		count += ft_putchar(number + 48);
	else
	{
		count += ft_unnbr(number / 10);
		count += ft_unnbr(number % 10);
	}
	return (count);
}
