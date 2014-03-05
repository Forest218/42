/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggarrigu <ggarrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/01 23:45:07 by ggarrigu          #+#    #+#             */
/*   Updated: 2014/03/04 22:00:49 by ggarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			*ft_range(int start, int end)
{
	int		*ret;
	int		i;

	i = 0;
	if (start < end)
	{
		if ((ret = (int *)malloc(sizeof(int) * (end - start + 1))) == NULL)
			return (NULL);
		while (start <= end)
			ret[i++] = start++;
	}
	else if (start > end)
	{
		if ((ret = (int *)malloc(sizeof(int) * (start - end + 1))) == NULL)
			return (NULL);
		while (start >= end)
			ret[i++] = start--;
	}
	else
	{
		if ((ret = (int *)malloc(sizeof(int) * 1)) == NULL)
			return (NULL);
		ret[i] = start;
	}
	return (ret);
}

int		main(int ac, char **av)
{
	int		*tab;
	int		i;

	i = -1;
	if (ac == 3)
	{
		tab = ft_range(atoi(av[1]), atoi(av[2]));
		while (tab[++i] != atoi(av[2]))
			printf("%d, ", tab[i]);
		printf("%d\n", tab[i]);
	}
	free(tab);
	return (0);
}
