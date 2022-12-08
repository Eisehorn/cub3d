/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiulian <fgiulian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:47:57 by fgiulian          #+#    #+#             */
/*   Updated: 2022/12/08 16:06:33 by fgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
		write(fd, s + (i++), 1);
}
