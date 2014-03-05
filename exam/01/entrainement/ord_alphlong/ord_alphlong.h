/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ord_alphlong.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggarrigu <ggarrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/23 20:55:15 by ggarrigu          #+#    #+#             */
/*   Updated: 2014/03/01 02:14:48 by ggarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ORD_ALPHLONG_H
# define ORD_ALPHLONG_H

# include <unistd.h>
# include <stdlib.h>

typedef struct		s_word
{
	char			*word;
	struct s_word	*next;
}					t_word;

typedef struct		s_len
{
	int				len;
	t_word			*wordlist;
	struct s_len	*next;
}					t_len;

char		*ft_strchr(char *str);
int			ft_strlen(char *str);
int			ft_cmp_ascii(char *s1, char *s2);
char		*ft_strdup(char *s1);
char		*ft_strsub(char *str, int len);
t_word		*ft_creat_word(char *word);
t_len		*ft_creat_len(int len, char *word);
t_word		*ft_next_word(char *word, t_word *first);
t_len		*ft_next_len(int len, char *word, t_len *first);

#endif
