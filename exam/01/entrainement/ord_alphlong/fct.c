/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggarrigu <ggarrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/23 21:01:49 by ggarrigu          #+#    #+#             */
/*   Updated: 2014/03/01 02:09:23 by ggarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord_alphlong.h"

int				ft_strlen(char *str)
{
	int			len;

	len = 0;
	while (*str == ' ' || *str == '\t')
		++str;
	while (str[len] && str[len] != ' ' && str[len] != '\t')
		len++;
	return (len);
}

char			*ft_strchr(char *str)
{
	while (*str && *str != ' ' && *str != '\t')
		++str;
	while (*str == ' ' || *str == '\t')
		++str;
	if (*str == '\0')
		return (NULL);
	return (str);
}

char			*ft_strdup(char *s1)
{
	char		*s2;
	int			i;

	i = -1;
	if ((s2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))) == NULL)
		return (NULL);
	while (s1[++i])
		s2[i] = s1[i];
	s2[i] = 0;
	return (s2);
}

char			*ft_strsub(char *str, int len)
{
	int			i;
	char		*sub;

	i = 0;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len && *str)
		sub[i++] = *str++;
	sub[i] = 0;
	return (sub);

}

int				ft_cmp_ascii(char *s1, char *s2)
{
	char		c1;
	char		c2;

	while (*s1 && *s2)
	{
		c1 = ((*s1 >= 'A' && *s1 <= 'Z') ? (*s1 + 32) : *s1);
		c2 = ((*s2 >= 'A' && *s2 <= 'Z') ? (*s2 + 32) : *s2);
		if (c1 != c2)
			break ;
		s1++;
		s2++;
	}
	return (c1 - c2);
}
