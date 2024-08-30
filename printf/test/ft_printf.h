/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbun <mbun@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:03:15 by mbun              #+#    #+#             */
/*   Updated: 2023/10/03 09:03:15 by mbun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int number);
int	ft_unnbr(unsigned int number);
int	ft_hexnbr(unsigned int number, char is_register);
int	ft_pointer_nbr(unsigned long int number);
int	ft_printf(const char *str, ...);

#endif