/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpole <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 14:29:45 by bpole             #+#    #+#             */
/*   Updated: 2019/11/19 20:56:20 by bpole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(void)
{
	char	*line;
	int		fd;

	fd = 0;
    while (get_next_line(fd, &line) > 0)
	{
        printf("%s\n", line);
		free(line);
	}
	return (0);
}
