/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggarrigu <ggarrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/23 19:13:19 by ggarrigu          #+#    #+#             */
/*   Updated: 2014/02/23 19:23:01 by ggarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rotone(char *str)
{
	while (*str)
	{
		if ((*str >= 'A' && *str < 'Z') || (*str >= 'a' && *str < 'z'))
			*str = *str + 1;
		else if (*str == 'Z' || *str == 'z')
			*str = *str - 25;
		write(1, str, 1);
		str++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}
