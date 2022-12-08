/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiulian <fgiulian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:48:13 by fgiulian          #+#    #+#             */
/*   Updated: 2022/12/08 16:06:33 by fgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	cc;

	i = 0;
	cc = (char) c;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			return ((char *) s + i);
		i++;
	}
	if (cc == '\0')
		return ((char *) s + i);
	return (NULL);
}
