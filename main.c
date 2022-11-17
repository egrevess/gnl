/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:10:17 by egrevess          #+#    #+#             */
/*   Updated: 2022/10/24 15:08:41 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("txt", O_RDONLY);
	printf("fd : %d\n", fd);
	printf("buffer_size : %d\n", BUFFER_SIZE);
	if (fd)
	{
		line = get_next_line(fd);
		while (line)
		{
			printf("LINE : %s", line);
			free(line);
			line = get_next_line(fd);
		}
		close(fd);
	}
	return (0);
}

