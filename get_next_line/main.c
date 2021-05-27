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

int     main()
{
        int fd;
        char *line;
        int i;
		int a;

        i = 0;
		a = 0;
        fd = open("text", O_RDONLY);
        while ((a = get_next_line(fd, &line)))
        {
			//printf("gnl = [%d]\n", a);
                printf("gnl[%d]: [%s]\n", a, line);
        //      printf("%s\n", line);
        }
		//printf("gnl = [%d]\n", a);
		printf("gnl[%d]: [%s]\n", a, line);
        //printf("ret = %d\n", get_next_line(fd, &line));
        //fd = open("text2", O_RDONLY);
        //printf("ret = %d\n", get_next_line(fd, &line));

        //free(line);
        //system("leaks a.out");
        return (0);
}
