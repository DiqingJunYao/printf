/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyao <dyao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:39:51 by dyao              #+#    #+#             */
/*   Updated: 2024/07/02 14:28:20 by dyao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

# include "./libft/libft.h"

void	ft_bzero(void *s, size_t n);
int		ft_char(va_list a);
int		ft_decimal(va_list a);
int		ft_hexnbr(unsigned int nb, char specifier);
int		ft_isalpha(int c);
char	*ft_itoa(int num);
void	*ft_memset(void *s, int c, size_t n);
int		ft_pointer(unsigned long long nb);
int		ft_percent(void);
int		ft_printf(const char *type, ...);
int		ft_putchar(int c);
int		ft_putstr(char *a);
int		ft_string(va_list a);
char	*ft_strchr(const char *str, int c);
int		ft_unsigned(unsigned int nb);
#endif