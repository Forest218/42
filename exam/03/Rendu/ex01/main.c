/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggarrigu <ggarrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/21 20:40:45 by ggarrigu          #+#    #+#             */
/*   Updated: 2014/02/21 20:50:41 by ggarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(int ac, char **av)
{
	int		*tab;
	int		i;

	if (ac == 3)
	{
		tab = ft_rrange(atoi(av[1]), atoi(av[2]));
		if (atoi(av[2]) < atoi(av[1])
		{
			while (i <= (atoi(av[1]) - atoi(av[2])))
			{
				printf("%d, ", tab[i])
				i++;
			}
		}
	}
	return (0);
}
