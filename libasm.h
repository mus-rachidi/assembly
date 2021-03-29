/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:47:01 by murachid          #+#    #+#             */
/*   Updated: 2021/03/09 12:47:04 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

size_t	ft_strlen(const char *str);
char	*ft_strcpy(const char *str1, const char *str2);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *s1);
ssize_t	ft_read(int fd, void *buf, size_t count);
ssize_t	ft_write(int fd, const char *buf, size_t count);

#endif
