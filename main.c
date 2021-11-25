/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:46:18 by acroisie          #+#    #+#             */
/*   Updated: 2021/11/25 08:55:17 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("file.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf("\033[1;36m%s\033[0m", line);
		free(line);
		line = get_next_line(fd);
	}
	free(line);
	close(fd);
	return (0);
}
