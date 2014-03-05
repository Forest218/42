/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/20 14:48:27 by exam              #+#    #+#             */
/*   Updated: 2014/02/20 16:21:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int		ft_iscap(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

static int		ft_ismin(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

static int		ft_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void			ft_str_capitalizer(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (i == 0 && ft_ismin(str[i]) == 1)
			str[i] = str[i] - 32;
		else if (ft_ismin(str[i]) == 1 && ft_space(str[i - 1]) == 1)
			str[i] = str[i] - 32;
		else if (ft_iscap(str[i]) == 1 && ft_space(str[i - 1]) == 0 && i != 0)
			str[i] = str[i] + 32;
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}

int				main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac > 1)
	{
		while (av[++i])
			ft_str_capitalizer(av[i]);
	}
	else
		write(1, "\n", 1);
	return (0);
}
