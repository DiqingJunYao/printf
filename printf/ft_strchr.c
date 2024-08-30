/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:13:00 by dyao              #+#    #+#             */
/*   Updated: 2024/06/25 21:40:40 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *str, int c)
{
	char	*str1;

	c = (char)c;
	str1 = (char *)str;
	while (*str1)
	{
		if (*str1 == c)
			return (str1);
		str1++;
	}
	if (c == '\0')
		return (NULL);
	return (NULL);
}
