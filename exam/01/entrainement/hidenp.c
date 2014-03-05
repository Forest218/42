/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggarrigu <ggarrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/23 19:24:25 by ggarrigu          #+#    #+#             */
/*   Updated: 2014/02/23 19:48:02 by ggarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hidenp(char *s1, char *s2)
{
	while (*s2 && *s1)
	{
		if (*s1 == *s2)
			s1++;
		s2++;
	}
	if (*s1 == 0)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_hidenp(av[1], av[2]);
	}
	write(1, "\n", 1);
	return (0);
}
