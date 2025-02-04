/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakorukl <hakorukl@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:40:17 by hakorukl          #+#    #+#             */
/*   Updated: 2025/02/04 19:37:37 by hakorukl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send_bits(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (c & (1 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(900);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*message;

	if (argc != 3)
	{
		ft_printf("\033[91mError: Usage: ./client <PID> <MESSAGE>\033[0m\n");
		return (1);
	}
	pid = ft_atoi(argv[1]);
	message = argv[2];
	while (*message)
	{
		ft_send_bits(pid, *message);
		message++;
	}
	ft_send_bits(pid, '\0');
	return (0);
}
