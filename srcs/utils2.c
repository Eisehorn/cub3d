/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiulian <fgiulian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:08:45 by fgiulian          #+#    #+#             */
/*   Updated: 2022/12/08 16:08:47 by fgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	next_line(char **line, int fd)
{
	free(*line);
	*line = get_next_line(fd);
}

void	free_colors(char **colors, char *str)
{
	free(colors[0]);
	free(colors[1]);
	free(colors[2]);
	free(colors);
	free(str);
}
