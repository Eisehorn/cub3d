/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_borders.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiulian <fgiulian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:07:08 by fgiulian          #+#    #+#             */
/*   Updated: 2022/12/08 17:38:42 by fgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	check_border1(t_map *textures, int i, int j)
{
	if ((textures->world_map[i][j - 1] != WALL
		&& textures->world_map[i][j - 1] != SPACE)
		|| (textures->world_map[i][j + 1] != WALL
		&& textures->world_map[i][j + 1] != SPACE)
		|| (textures->world_map[i + 1][j - 1] != WALL
		&& textures->world_map[i + 1][j - 1] != SPACE)
		|| (textures->world_map[i + 1][j] != WALL
		&& textures->world_map[i + 1][j] != SPACE)
		|| (textures->world_map[i + 1][j + 1] != WALL
		&& textures->world_map[i + 1][j + 1] != SPACE)
		|| textures->world_map[i][j] == DOOR0)
		return (print_error("Wrong File. Map is invalid"));
	return (1);
}

int	check_border2(t_map *textures, int i, int j)
{
	if ((textures->world_map[i - 1][j] != WALL
		&& textures->world_map[i - 1][j] != SPACE)
		|| (textures->world_map[i - 1][j + 1] != WALL
		&& textures->world_map[i - 1][j + 1] != SPACE)
		|| (textures->world_map[i][j + 1] != WALL
		&& textures->world_map[i][j + 1] != SPACE)
		|| (textures->world_map[i + 1][j] != WALL
		&& textures->world_map[i + 1][j] != SPACE)
		|| (textures->world_map[i + 1][j + 1] != WALL
		&& textures->world_map[i + 1][j + 1] != SPACE)
		|| textures->world_map[i][j] == DOOR0)
		return (print_error("Wrong File. Map is invalid"));
	return (1);
}

int	check_border3(t_map *textures, int i, int j)
{
	if ((textures->world_map[i - 1][j - 1] != WALL
		&& textures->world_map[i - 1][j - 1] != SPACE)
		|| (textures->world_map[i - 1][j] != WALL
		&& textures->world_map[i - 1][j] != SPACE)
		|| (textures->world_map[i - 1][j + 1] != WALL
		&& textures->world_map[i - 1][j + 1] != SPACE)
		|| (textures->world_map[i][j - 1] != WALL
		&& textures->world_map[i][j - 1] != SPACE)
		|| (textures->world_map[i][j + 1] != WALL
		&& textures->world_map[i][j + 1] != SPACE)
		|| textures->world_map[i][j] == DOOR0)
		return (print_error("Wrong File. Map is invalid"));
	return (1);
}

int	check_border4(t_map *textures, int i, int j)
{
	if ((textures->world_map[i - 1][j - 1] != WALL
		&& textures->world_map[i - 1][j - 1] != SPACE)
		|| (textures->world_map[i - 1][j] != WALL
		&& textures->world_map[i - 1][j] != SPACE)
		|| (textures->world_map[i][j - 1] != WALL
		&& textures->world_map[i][j - 1] != SPACE)
		|| (textures->world_map[i + 1][j - 1] != WALL
		&& textures->world_map[i + 1][j - 1] != SPACE)
		|| (textures->world_map[i + 1][j] != WALL
		&& textures->world_map[i + 1][j] != SPACE)
		|| textures->world_map[i][j] == DOOR0)
		return (print_error("Wrong File. Map is invalid"));
	return (1);
}

int	check_full_border(t_map *textures, int i, int j)
{
	if (i == 0)
	{
		if (ft_strlen(textures->world_map[i])
			!= ft_strlen(textures->world_map[i + 1]))
			return (print_error("Wrong File. Map is invalid"));
	}
	else if (!textures->world_map[i + 1])
	{
		if (ft_strlen(textures->world_map[i])
			!= ft_strlen(textures->world_map[i - 1]))
			return (print_error("Wrong File. Map is invalid"));
	}
	return (1);
}
