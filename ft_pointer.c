/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakorukl <hakorukl@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:48:03 by hakorukl          #+#    #+#             */
/*   Updated: 2025/02/04 18:40:31 by hakorukl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_atoi.h"

int	ft_pointer(unsigned long ptr)
{
	int	i;

	i = 0;
	if (ptr == (unsigned long) NULL)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	if (ptr >= 16)
		i += ft_pointer(ptr / 16);
	else
		i += ft_putstr("0x");
	if ((ptr % 16) < 10)
		i += ft_putchar((ptr % 16) + '0');
	else
		i += ft_putchar((ptr % 16) + 87);
	return (i);
}
