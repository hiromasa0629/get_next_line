/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:52:37 by marvin            #+#    #+#             */
/*   Updated: 2021/05/10 17:52:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     main(int ac, char **av)
{
        int fd[4] = {0};
        char *line;
		int a;
		int	i;
		int	index;

		a = 0;
		i = 1;
		index = 0;
		while (av[i])
		{
			fd[index++] = open(av[i++], O_RDONLY);
		}
		fd[index] = 0;
		index = 0;
		while (fd[index])
		{
         	while ((a = get_next_line(fd[index], &line)))
            	printf("gnl[%d]: [%s]\n", a, line);
			index++;
		}
        return (0);
}
