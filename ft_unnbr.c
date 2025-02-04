/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakorukl <hakorukl@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:48:25 by hakorukl          #+#    #+#             */
/*   Updated: 2025/02/04 18:40:04 by hakorukl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_atoi.h"

int	ft_unnbr(unsigned long u)
{
	int	i;

	i = 0;
	if (u <= 9)
		i += ft_putchar(u + '0');
	else
	{
		i += ft_unnbr(u / 10);
		i += ft_unnbr(u % 10);
	}
	return (i);
}
