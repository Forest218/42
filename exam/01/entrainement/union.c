/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggarrigu <ggarrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/23 19:54:34 by ggarrigu          #+#    #+#             */
/*   Updated: 2014/02/23 20:44:28 by ggarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
	int		ascii[128];
	int		j;

	j = -1;
	while (++j < 128)
		ascii[j] = 0;
	while (*s1)
	{
		if (ascii[(int)*s1] == 0)
		{
			write(1, s1, 1);
			ascii[(int)*s1] = 1;
		}
		s1++;
	}
	while (*s2)
	{
		if (ascii[(int)*s2] == 0)
		{
			write(1, s2, 1);
			ascii[(int)*s2] = 1;
		}
		s2++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
