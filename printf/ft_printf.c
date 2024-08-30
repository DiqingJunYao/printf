/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:08:55 by dyao              #+#    #+#             */
/*   Updated: 2024/07/03 17:56:07 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	process_specifier(char specifier, va_list a)
{
	size_t	i;

	i = 0;
	if (specifier == 'c')
		i = ft_char(a);
	else if (specifier == 's')
		i = ft_string(a);
	else if (specifier == 'p')
		i = i + ft_pointer(va_arg(a, unsigned long int));
	else if (specifier == 'd')
		i = ft_decimal(a);
	else if (specifier == 'i')
		i = ft_decimal(a);
	else if (specifier == 'u')
		i = ft_unsigned(va_arg(a, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		i = ft_hexnbr(va_arg(a, int), specifier);
	else if (specifier == '%')
		i = ft_percent();
	return (i);
}

static int	ft_sort_ft(char *type, va_list a)
{
	size_t	i;
	size_t	j;
	char	*specifiers;

	j = 0;
	i = 0;
	specifiers = "cspdiuxX%";
	while (type[i])
	{
		if (type[i] == '%' && ft_strchr(specifiers, type[i + 1]) != NULL)
		{
			j = process_specifier(type[i + 1], a) + j;
			i++;
		}
		else
		{
			ft_putchar(type[i]);
			j++;
		}
		i++;
	}
	return (j);
}

int	ft_printf(const char *type, ...)
{
	va_list	a;
	size_t	i;

	i = 0;
	if (!type || *type == '\0')
		return (0);
	va_start(a, (char *)type);
	i = ft_sort_ft((char *)type, a);
	va_end(a);
	return (i);
}

// int	main(void)
// {
// 	char	*p;
// 	char	a;

// 	a = 0;
// 	p = &a;
// 	printf("%d",ft_printf("abc\nabc"));
// }
