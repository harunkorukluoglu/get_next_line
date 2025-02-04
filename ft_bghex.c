/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bghex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakorukl <hakorukl@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:48:00 by hakorukl          #+#    #+#             */
/*   Updated: 2024/12/18 15:48:00 by hakorukl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_atoi.h"

int	ft_bghex(unsigned int x)
{
	int	i;

	i = 0;
	if (x >= 16)
		i += ft_bghex(x / 16);
	if ((x % 16) < 10)
		i += ft_putchar((x % 16) + '0');
	else
		i += ft_putchar((x % 16) + 55);
	return (i);
}
