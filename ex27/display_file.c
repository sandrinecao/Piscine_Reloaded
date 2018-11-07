/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:17:02 by scao              #+#    #+#             */
/*   Updated: 2018/11/07 17:17:44 by scao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "j12.h"

int		ft_put_error(char *str)
{
	int		i;

	i = -1;
	while (str && str[++i])
		;
	write(2, str, i);
	return (0);
}

int		main(int ac, char **av)
{
	int		fd;
	char	*buf;

	if (ac == 1)
		return (ft_put_error("File name missing.\n"));
	if (ac > 2)
		return (ft_put_error("Too many arguments.\n"));
	fd = open(av[1], O_RDONLY);
	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
	close(fd);
	return (0);
}
