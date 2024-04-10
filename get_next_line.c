/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:59:39 by fsoria            #+#    #+#             */
/*   Updated: 2024/04/05 13:59:39 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*str_open_fd;
	int			buffer_size;
	char		*buffer;
	size_t		num_read;

	str_open_fd = NULL;
	buffer_size = 1;
	if (str_open_fd == NULL)
	{
		str_open_fd = malloc(buffer_size);
		if (str_open_fd == NULL)
			return (NULL);
	}
	buffer = malloc(buffer_size);
	num_read = read(fd, buffer, buffer_size - 1);
	if (num_read < 0)
		return (NULL);
	buffer[num_read] = '\0';
	ft_strlcpy(str_open_fd, buffer, buffer_size);
	return (str_open_fd);
}
