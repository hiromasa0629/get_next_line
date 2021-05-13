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

        i = 0;
        fd = open("text", O_RDONLY);
        while (get_next_line(fd, &line) == 1)
        {
                printf("line[%d]: [%s]\n", i++, line);
        //      printf("%s\n", line);
        }
        printf("ret = %d\n", get_next_line(fd, &line));
        fd = open("text2", O_RDONLY);
        printf("ret = %d\n", get_next_line(fd, &line));

        free(line);
        //system("leaks a.out");
        return (0);
}
