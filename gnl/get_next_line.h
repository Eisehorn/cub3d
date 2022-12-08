/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiulian <fgiulian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:05:15 by fgiulian          #+#    #+#             */
/*   Updated: 2022/12/08 16:05:17 by fgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "../libft/libft.h"

# define BUFFER_SIZE	1

char	*get_next_line(int fd);
char	*ft_strdup(const char *s1);
char	*ft_gnl_strjoin(char *s1, char *s2);
int		ft_search(const char *s, char c);
char	*ft_gnl_substr(char *s, unsigned int start, size_t len, int need_free);
int		ft_line(char *src);

#endif
