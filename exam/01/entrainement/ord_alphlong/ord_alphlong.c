/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ord_alphlong.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggarrigu <ggarrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/23 20:46:54 by ggarrigu          #+#    #+#             */
/*   Updated: 2014/03/01 02:16:09 by ggarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord_alphlong.h"
#include <stdio.h>

t_len			*ord_alphlong(char *str)
{
	char		*word;
	t_len		*list;

	while (*str == ' ' || *str == '\t')
		++str;
	word = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	word = ft_strsub(str, ft_strlen(str));
	list = ft_creat_len(ft_strlen(str), word);
	str = ft_strchr(str);
	while (str && *str)
	{
		word = (char *)malloc(sizeof(char) * ((ft_strlen(str)) + 1));
		word = ft_strsub(str, ft_strlen(str));
		list = ft_next_len(ft_strlen(str), word, list);
		str = ft_strchr(str);
	}
	return (list);
}

int			main(int ac, char **av)
{
	t_len		*list;

	if (ac == 2)
	{
		list = ord_alphlong(av[1]);
		while (list)
		{
			while (list->wordlist->next)
			{
				printf("%s ", list->wordlist->word);
				list->wordlist = list->wordlist->next;
			}
			printf("%s", list->wordlist->word);
			list = list->next;
			printf("\n");
		}
	}
	return (0);
}
