/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakorukl <hakorukl@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:48:06 by hakorukl          #+#    #+#             */
/*   Updated: 2025/02/04 18:40:27 by hakorukl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_atoi.h"

int	ft_format(char c, va_list ag)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(ag, int));
	else if (c == 's')
		len += ft_putstr(va_arg(ag, char *));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(ag, int));
	else if (c == 'u')
		len += ft_unnbr(va_arg(ag, unsigned int));
	else if (c == 'x')
		len += ft_smhex(va_arg(ag, unsigned int));
	else if (c == 'X')
		len += ft_bghex(va_arg(ag, unsigned int));
	else if (c == 'p')
	{
		len += ft_pointer(va_arg(ag, unsigned long));
	}
	else
		len += ft_putchar(c);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ag;
	size_t	len;

	if (!str)
		return (0);
	len = 0;
	va_start(ag, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len += ft_format(*str, ag);
		}
		else
			len += ft_putchar(*str);
		str++;
	}
	va_end(ag);
	return (len);
}
