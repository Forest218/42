/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggarrigu <ggarrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/19 22:39:42 by ggarrigu          #+#    #+#             */
/*   Updated: 2014/01/19 22:57:25 by ggarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rotone(char *s)
{
	int		i;
	char	c;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 'A' && s[i] < 'Z') || (s[i] >= 'a' && s[i] < 'z'))
			c = (s[i] + 1);
		else if (s[i] == 'Z' || s[i] == 'z')
			c = (s[i] - 25);
		else
			c = s[i];
		write(1, &c, 1);
		i++;
	}
}

int		main(int argc,char ** argv)
{
	if (argc == 2)
		ft_rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
