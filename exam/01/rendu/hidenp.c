/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggarrigu <ggarrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/19 23:13:14 by ggarrigu          #+#    #+#             */
/*   Updated: 2014/01/28 19:47:51 by ggarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_hidenp(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1[i] != '\0' && s2[j] == '\0')
	{
		write(1, "0", 1);
		return (0);
	}
	if (s1[i] != '\0')
	{
		while (s1[i] != s2[j] && s2[j] != '\0')
		{
			j++;
			if (s2[j] == '\0')
			{
				write(1, "0", 1);
				return (0);
			}
			if (s1[i] == s2[j])
			{
				i++;
				j++;
			}
			if (s1[i] == '\0')
				write (1, "1", 1);
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
