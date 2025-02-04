/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakorukl <hakorukl@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:48:22 by hakorukl          #+#    #+#             */
/*   Updated: 2024/12/18 15:48:22 by hakorukl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_atoi.h"

int	ft_smhex(unsigned int x)
{
	int	i;

	i = 0;
	if (x >= 16)
		i += ft_smhex(x / 16);
	if ((x % 16) < 10)
		i += ft_putchar((x % 16) + '0');
	else
		i += ft_putchar((x % 16) + 87);
	return (i);
}
