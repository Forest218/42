/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listfct.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggarrigu <ggarrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 18:36:06 by ggarrigu          #+#    #+#             */
/*   Updated: 2014/03/01 02:14:50 by ggarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord_alphlong.h"

t_word			*ft_creat_word(char *word)
{
	t_word		*first;

	if ((first = (t_word *)malloc(sizeof(t_word))) == NULL)
		return (NULL);
	first->word = ft_strdup(word);
	first->next = NULL;
	return (first);
}

t_len			*ft_creat_len(int len, char *word)
{
	t_len		*first;

	if ((first = (t_len *)malloc(sizeof(t_len))) == NULL)
		return (NULL);
	first->len = len;
	first->wordlist = ft_creat_word(word);
	first->next = NULL;
	return (first);
}

t_word		*ft_next_word(char *word, t_word *first)
{
	t_word		*new;
	t_word		*tmp;

	if ((new = (t_word *)malloc(sizeof(t_word))) == NULL)
		return (NULL);
	tmp = first;
	new->word = ft_strdup(word);
	while (tmp->next && ft_cmp_ascii(new->word, tmp->next->word) >= 0)
		tmp = tmp->next;
	if ((ft_cmp_ascii(new->word, tmp->word) < 0))
	{
		new->next = tmp;
		return (new);
	}
	else
	{
		new->next = tmp->next;
		tmp->next = new;
	}
	return (first);
}

t_len		*ft_next_len(int len, char *word, t_len *first)
{
	t_len		*new;
	t_len		*tmp;

	tmp = first;
	while (tmp->next != NULL && tmp->next->len <= len)
		tmp = tmp->next;
	if (tmp->len == len)
		tmp->wordlist = ft_next_word(word, tmp->wordlist);
	else
		new = (t_len *)malloc(sizeof(t_len));
	if (new)
		new->len = len;
	if (new && tmp->len > new->len)
	{
		new->next = tmp;
		new->wordlist = ft_creat_word(word);
		return (new);
	}
	else if (new && tmp->len < new->len)
	{
		new->next = tmp->next;
		tmp->next = new;
		new->wordlist = ft_creat_word(word);
	}
	return (first);
}
