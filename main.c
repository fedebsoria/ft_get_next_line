/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:20:23 by fsoria            #+#    #+#             */
/*   Updated: 2024/04/10 11:20:23 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>


int main(int argc, char *argv[]) {
    int fd;
    char *line;
    int i;

    if (argc == 2) {
        fd = open(argv[1], O_RDONLY);
        if (fd == -1) {
            printf("Error opening file\n");
            return (1);
        }
    } else {
        fd = 0;  // Use standard input if no file name is provided
    }

    i = 1;
    while ((line = get_next_line(fd))) {
        printf("%d: %s\n", i, line);
        free(line);
        i++;
    }
    if (argc == 2) {
        close(fd);
    }
    return (0);
}