/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakorukl <hakorukl@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:48:09 by hakorukl          #+#    #+#             */
/*   Updated: 2024/12/18 15:48:09 by hakorukl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_putstr(char *s);
int	ft_unnbr(unsigned long u);
int	ft_pointer(unsigned long ptr);
int	ft_smhex(unsigned int x);
int	ft_bghex(unsigned int x);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_atoi(const char *str);

#endif
