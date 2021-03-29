/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 15:14:07 by murachid          #+#    #+#             */
/*   Updated: 2021/03/28 15:14:09 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int	main(void)
{
	int		n;
	int		bz;
	char	*s;
	char	*d;

	bz = 20;
	s = malloc(10);
	d = malloc(20);
	n = ft_write(1, "|that's hahahah|\n", 17);
	n = ft_read(0, s, bz);
	n = read(0, s, bz);
	printf("read |C| ==> |%d| and |%s|\n", n, s);
	printf("ft_strlen.s ==> |%lu|\n", ft_strlen("hello world"));
	printf("ft_strcmp.s ==> |%d|\n", ft_strcmp("hello world", "hello world"));
	printf("ft_strcpy.s ==> |%s|\n", ft_strcpy(d, "hahhahhahha"));
	printf("ft_strdup.s ==> |%s|\n", ft_strdup("hello world its me "));
	return (0);
}
