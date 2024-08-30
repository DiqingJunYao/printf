/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:07:36 by dyao              #+#    #+#             */
/*   Updated: 2024/07/04 11:57:15 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string(va_list a)
{
	size_t	i;
	char	*string;

	i = 0;
	string = va_arg(a, char *);
	if (!string)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (string[i])
	{
		ft_putchar(string[i]);
		i++;
	}
	return (i);
}
