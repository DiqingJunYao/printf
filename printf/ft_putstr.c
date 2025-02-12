/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:11:24 by dyao              #+#    #+#             */
/*   Updated: 2024/06/24 18:13:25 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *a)
{
	size_t	i;

	i = 0;
	if (!a)
		return (write (1, "(null)", 6));
	while (a[i])
	{
		ft_putchar(a[i]);
		i++;
	}
	return (i);
}
