/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/20 16:24:59 by exam              #+#    #+#             */
/*   Updated: 2014/02/21 20:54:18 by ggarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int		i;
	int		j;
	int		*tab;

	i = -1;
	j = -1;
	if (end < start)
	{
		tab = (int *)malloc(sizeof(int) * (start - end + 1));
		while (++i <= (start - end + 1))
			tab[i] = end + i;
	}
	else if (start < end)
	{
		tab = (int *)malloc(sizeof(int) * (end - start + 1));
		while (++i <= (end - start + 1))
			tab[i] = end - i;
	}
	else
		tab = (int *)malloc(sizeof(int) * 1);
			tab[i + 1] = start;
	return (tab);
}
