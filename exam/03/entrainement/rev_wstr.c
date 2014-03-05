/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggarrigu <ggarrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 22:21:29 by ggarrigu          #+#    #+#             */
/*   Updated: 2014/03/06 00:23:04 by ggarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>

char		**ft_malloc_words(char *str)
{
	char	**ret;
	int		words;

	words = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\t')
		{
			while (*str && (*str == ' ' || *str == '\t'))
				++str;
			words++;
		}
		else if (*str != ' ' && *str != '\t')
		{
			while (*str && *str != ' ' && *str != '\t')
				++str;
			words++;
		}
	}
	if ((ret = (char **)malloc(sizeof(char *) * (words + 1))) == NULL)
		return (NULL);
	ret[words] = NULL;
	return (ret);
}

char		**ft_malloc_char(char *str)
{
	char	**ret;
	int		chars;
	int		words;

	words = 0;
	ret = ft_malloc_words(str);
	while (*str)
	{
		chars = 0;
		if (*str == ' ' || *str == '\t')
		{
			while (*str && (*str == ' ' || *str == '\t') && ++str)
				chars++;
		}
		else if (*str != ' ' && *str != '\t')
		{
			while (*str && *str != ' ' && *str != '\t' && ++str)
				chars++;
		}
		if ((ret[words] = (char *)malloc(sizeof(char) * (chars + 1))) == NULL)
			return (NULL);
		ret[words][chars] = '\0';
		words++;
	}
	return (ret);
}

char		**ft_strsplit(char *str)
{
	int		chars;
	int		words;
	char	**ret;

	words = -1;
	if ((ret = ft_malloc_char(str)) == NULL)
		return (NULL);
	while (*str && ret[++words])
	{
		chars = -1;
		if (*str == ' ' || *str == '\t')
		{
			while (*str && (*str == ' ' || *str == '\t'))
				ret[words][++chars] = *str++;
		}
		else if (*str != ' ' && *str != '\t')
		{
			while (*str && *str != ' ' && *str != '\t')
				ret[words][++chars] = *str++;
		}
	}
	return (ret);
}

void		ft_rev_wstr(char *str)
{
	char	**ret;
	int		i;
	int		j;

	i = 0;
	ret = ft_strsplit(str);
	while (ret[i] != NULL)
		i++;
	while (--i >= 0)
	{
		j = -1;
		while (ret[i][++j])
			write(1, &ret[i][j], 1);
		free(ret[i]);
	}
}

int			main(int ac, char **av)
{
	if (ac == 2)
		ft_rev_wstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
