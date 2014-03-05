/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .c                                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggarrigu <ggarrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/28 18:08:01 by ggarrigu          #+#    #+#             */
/*   Updated: 2014/01/28 18:18:02 by ggarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_rotone(char *str)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] < 'Z') || (str[i] >= 'a' && str[i] < 'z'))
			str[i] = str[i] + 1;
		if (str[i] == 'Z' || str[i] == 'z')
			str[i] = str[i] - 32;
	}
	write(1, str, len);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
