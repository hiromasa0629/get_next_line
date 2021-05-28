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

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	check_nl(char *s, char c)
{
	int	i;

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

char	*ft_strdup(char *s)
{
	char	*string;
	int		i;

	if (!s)
	{
		//printf("HERE\n");
		return (NULL);
	}
	//printf("strlen(s) = [%d]\n", ft_strlen(s));
	string = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!string)
		return (NULL);
	i = 0;
	while (s[i])
	{
		//printf("HERE\n");
		string[i] = s[i];
		i++;
	}
	string[i] = '\0';
	//free(s);
	//printf("string[%d] = [%s]\n", i, string);
	return (string);
}

char	*ft_strjoin(char *save, char *buf)
{
	char	*join;
	int		len;
	int		i;
	int		j;

	//printf("save = [%s]\n", save);
	//printf("buf = [%s]\n", buf);
	if (!save && !buf)
	{
		//printf("HERE\n");
		return (ft_strdup(""));
	}
	if (!save)
	{
		//printf("HERE\n");
		return (ft_strdup(buf));
	}
	//printf("buf2 = [%s]\n", buf);
	len = ft_strlen(save) + ft_strlen(buf);
	//printf("strlen(buf) = [%d]\n", ft_strlen(buf));
	join = (char *)malloc(sizeof(char) * (len + 1));
	if (!join)
		return (NULL);
	//printf("buf2 = [%s]\n", buf);
	//printf("buf2 = [%p]\n", buf);
	i = 0;
	j = 0;
	//printf("buf2 = [%s]\n", buf);
	while (save[i])
		join[i++] = save[j++];
	//printf("buf2 = [%s]\n", buf);
	//printf("buf2 = [%p]\n", buf);
	j = 0;
	while (buf[j])
		join[i++] = buf[j++];
	join[i] = '\0';
	//printf("join = [%s]\n", join);
	//printf("save = [%s]\n", save);
	free(save);
	return (join);
}
