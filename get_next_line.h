/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:02:10 by fsoria            #+#    #+#             */
/*   Updated: 2024/04/05 14:02:10 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stddef.h>

char	*get_next_line(int fd);
size_t	ft_str_len(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif
