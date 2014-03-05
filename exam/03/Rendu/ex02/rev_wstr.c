/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/20 18:12:59 by exam              #+#    #+#             */
/*   Updated: 2014/02/20 18:25:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

char	*ft_rev_wstr(char *str)
{
	char	*strinv;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	strinv = (char *)malloc(sizeof(char) * (len + 1));
	while (len >= 0)
	{
		if (ft_space(str[len - 1]) == 1)
	}
}
