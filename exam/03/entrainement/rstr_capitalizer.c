/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggarrigu <ggarrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/01 23:14:53 by ggarrigu          #+#    #+#             */
/*   Updated: 2014/03/01 23:40:23 by ggarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_ismin(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_iscap(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\0')
		return (1);
	return (0);
}

void		rstr_capitalizer(char *str)
{
	while (*str)
	{
		if (ft_iscap(*str) && !ft_isspace(*(str + 1)))
			*str = *str + 32;
		else if (ft_ismin(*str) && ft_isspace(*(str + 1)))
			*str = *str - 32;
		write(1, str, 1);
		++str;
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac > 1)
	{
		while (++i < ac)
			rstr_capitalizer(av[i]);
	}
	else
		write(1, "\n", 1);
	return (0);
}
