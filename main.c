/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julio <julio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 23:05:57 by julio             #+#    #+#             */
/*   Updated: 2016/02/02 18:53:40 by jmontija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line/get_next_line.h"

int		main(int argc, char **argv)
{
	int fd = 0;
	int ret = 0;
	char *line;

	//printf("MAIN_LINE %s\n", line);
	if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	while ((ret = get_next_line(fd, &line)))
	{
		if (ret == -1)
			break;
		printf("GNL: %s\n", line);
	}
	//ret = get_next_line(fd, &line);
	printf("ret = %d\n", ret);
}
