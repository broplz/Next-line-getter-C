/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:55:11 by hcherrie          #+#    #+#             */
/*   Updated: 2021/01/25 15:55:13 by hcherrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

size_t			ft_strlen(char *str);
char			*ft_strjoin(char *s1, char *s2);
void			*ft_memcpy(void *dst, void *src, size_t len);
char			*ft_strdup(char *str);
int				ft_strchr(char *str, int ch, int flag);
int				get_next_line(int fd, char **line);

#endif
