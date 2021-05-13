/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:44:12 by marvin            #+#    #+#             */
/*   Updated: 2021/05/10 17:44:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int             ft_strlen(char *s)
{
        int i;

        i = 0;
        while (s[i])
                i++;
        return (i);
}

int             check_nl(char *s, char c)
{
        int i;

        if (!s)
                return (0);
        i = 0;
        while (s[i] != c)
        {
                if (s[i] == '\0')
                        return (0);
                i++;
        }
        if (s[i] == c)
                return (1);
        return (0);
}

char    *ft_strdup(char *s)
{
        char *string;
        int i;

        if (!s)
                return (NULL);
        if (!(string = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
                return (NULL);
        i = 0;
        while (s[i])
        {
                string[i] = s[i];
                i++;
        }
        string[i] = '\0';
        return (string);
}

char    *ft_strjoin(char *save, char *buf)
{
        char *join;
        int len;
        int i;
        int j;

        if (!save)
                return (ft_strdup(buf));
        len = ft_strlen(save) + ft_strlen(buf);
        if (!(join = (char *)malloc(sizeof(char) * (len + 1))))
                return (NULL);
        i = -1;
        while (save[++i])
                join[i] = save[i];
        j = -1;
        while (buf[++j])
                join[i++] = buf[j];
        join[i] = '\0';
        return (join);
}