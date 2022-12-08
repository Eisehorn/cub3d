/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_angles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiulian <fgiulian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:06:58 by fgiulian          #+#    #+#             */
/*   Updated: 2022/12/08 16:07:00 by fgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	check_angle1(t_map *textures, int i, int j)
{
	if ((textures->world_map[i][j + 1] != WALL
		&& textures->world_map[i][j + 1] != SPACE)
		|| (textures->world_map[i + 1][j] != WALL
		&& textures->world_map[i + 1][j] != SPACE)
		|| (textures->world_map[i + 1][j + 1] != WALL
		&& textures->world_map[i + 1][j + 1] != SPACE)
		|| textures->world_map[i][j] == DOOR0)
		return (print_error("Wrong File. Map is invalid"));
	return (1);
}

int	check_angle2(t_map *textures, int i, int j)
{
	if ((textures->world_map[i][j - 1] != WALL
		&& textures->world_map[i][j - 1] != SPACE)
		|| (textures->world_map[i + 1][j - 1] != WALL
		&& textures->world_map[i + 1][j - 1] != SPACE)
		|| (textures->world_map[i + 1][j] != WALL
		&& textures->world_map[i + 1][j] != SPACE)
		|| textures->world_map[i][j] == DOOR0)
		return (print_error("Wrong File. Map is invalid"));
	return (1);
}

int	check_angle3(t_map *textures, int i, int j)
{
	if ((textures->world_map[i - 1][j] != WALL
		&& textures->world_map[i - 1][j] != SPACE)
		|| (textures->world_map[i - 1][j + 1] != WALL
		&& textures->world_map[i - 1][j + 1] != SPACE)
		|| (textures->world_map[i][j + 1] != WALL
		&& textures->world_map[i][j + 1] != SPACE)
		|| textures->world_map[i][j] == DOOR0)
		return (print_error("Wrong File. Map is invalid"));
	return (1);
}

int	check_angle4(t_map *textures, int i, int j)
{
	if ((textures->world_map[i - 1][j - 1] != WALL
		&& textures->world_map[i - 1][j - 1] != SPACE)
		|| (textures->world_map[i - 1][j] != WALL
		&& textures->world_map[i - 1][j] != SPACE)
		|| (textures->world_map[i][j - 1] != WALL
		&& textures->world_map[i][j - 1] != SPACE)
		|| textures->world_map[i][j] == DOOR0)
		return (print_error("Wrong File. Map is invalid"));
	return (1);
}
