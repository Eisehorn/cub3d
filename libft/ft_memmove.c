/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiulian <fgiulian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:47:26 by fgiulian          #+#    #+#             */
/*   Updated: 2022/12/08 16:06:33 by fgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*cdst;
	unsigned char	*csrc;
	size_t			i;

	cdst = (unsigned char *) dst;
	csrc = (unsigned char *) src;
	if (cdst == NULL && csrc == NULL)
		return (NULL);
	if (cdst > csrc)
	{
		while (n--)
			cdst[n] = csrc[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	return (dst);
}
