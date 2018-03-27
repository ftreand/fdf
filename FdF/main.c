/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ftreand <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/22 15:18:45 by ftreand      #+#   ##    ##    #+#       */
/*   Updated: 2018/03/22 18:11:47 by ftreand     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/fdf.h"
#include "includes/mlx.h"
#include "includes/get_next_line.h"

void	ft_fill_tab(int x, int y, char *line)
{
	char *tmp;
	int i;
	int j;

	
}

int		main(int ac, char **av)
{
	int			fd;
	char		*line;
	t_point		map;

	tab.x = 0;
	tab.y = 0;
	if (ac)
	{
		if ((fd = open(av[1], O_RDONLY)) == -1)
			return (0);
		while (get_next_line(fd, &line) == 1)
		{
			ft_fill_tab(x, y, line);
			x++;
		}
	}
}
