/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:02:29 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 14:27:25 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	di;
	size_t	si;

	si = ft_strlen(src);
	if (!dst && size == 0)
		return (si);
	d = ft_strlen(dst);
	di = d;
	if (size <= di)
		return (size + si);
	s = 0;
	while (src[s] && d + 1 < size)
	{
		dst[d] = src[s];
		s++;
		d++;
	}
	dst[d] = 0;
	return (di + si);
}
/*
int main(void)
{
	// Пример 1: Строки достаточно длинные
	char	dst1[30] = "Hello, ";
	char	src1[] = "World!";
	size_t	size1 = 30;
	// Пример 2: dst слишком короткая для полного добавления src
	char	dst2[15] = "Hello, ";
	char	src2[] = "World!";
	size_t	size2 = 10;
	// Пример 3: Когда size меньше, чем длина dst
	char	dst3[10] = "Hello, ";
	char	src3[] = "World!";
	size_t	size3 = 7;
	// Пример 1: Добавляем строку с достаточным размером
	printf("До ft_strlcat (пример 1): %s\n", dst1);
	ft_strlcat(dst1, src1, size1);
	printf("После ft_strlcat (пример 1): %s\n", dst1);
	// Пример 2: Добавляем строку, но размер недостаточен
	printf("\nДо ft_strlcat (пример 2): %s\n", dst2);
	ft_strlcat(dst2, src2, size2);
	printf("После ft_strlcat (пример 2): %s\n", dst2);
	// Пример 3: Добавляем строку, когда size меньше длины dst
	printf("\nДо ft_strlcat (пример 3): %s\n", dst3);
	ft_strlcat(dst3, src3, size3);
	printf("После ft_strlcat (пример 3): %s\n", dst3);
	return (0);
}
*/
