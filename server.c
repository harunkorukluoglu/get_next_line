/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakorukl <hakorukl@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:22:08 by hakorukl          #+#    #+#             */
/*   Updated: 2025/02/03 19:50:00 by hakorukl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	receive_char(int signum)
{
	static char	current_char = 0;
	static int	bit_position = 0;

	if (signum == SIGUSR1)
		current_char |= (1 << bit_position);
	bit_position++;
	if (bit_position == 8)
	{
		if (current_char == 0)
			write(1, "\n", 1);
		else
			write(1, &current_char, 1);
		current_char = 0;
		bit_position = 0;
	}
}

int	main(void)
{
	ft_printf("Server PID: %d\n", getpid());
	signal(SIGUSR1, receive_char);
	signal(SIGUSR2, receive_char);
	while (1)
		pause();
	return (0);
}
