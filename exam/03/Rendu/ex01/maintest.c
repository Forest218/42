/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconso <sconso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/21 20:49:05 by sconso            #+#    #+#             */
/*   Updated: 2014/02/21 20:50:00 by sconso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			*ft_rrange(int start, int end);

int		ft_atoi(const char *str)
{
	int		nb;
	int		isneg;

	isneg = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	nb = 0;
	if (*str == '-')
		isneg = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10;
		nb = nb + (*str++ - '0');
	}
	if (isneg == 1)
		nb = -nb;
	return (nb);
}

int			main(int ac, char **av)
{
	int		*tab;
	int		i;
	int		size;
	int		start;
	int		end;

	if (ac == 3)
	{
		start = ft_atoi(av[1]);
		end = ft_atoi(av[2]);
		tab = ft_rrange(start, end);
		size = (start > end ? start - end : end - start);
		i = -1;
		while (++i < size)
			printf("%d | ", tab[i]);
		printf("%d\n", tab[i]);
	}
	else
		printf("Usage : ./a.out start end (connard)\n");
	return (0);
}
