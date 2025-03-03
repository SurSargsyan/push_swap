/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:56:59 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/10 13:01:00 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int main(void)
{
	char	src[] = "Hello, World!";
	char	dest[20];
	char	dest2[5]; // Для теста переполнения
	// Копирование строки в dest с достаточным размером
	ft_strlcpy(dest, src, sizeof(dest));
	printf("src: %s\n", src);
	printf("dest (достаточный размер): %s\n", dest);
	// Копирование строки в dest2 (с размером меньше длины строки)
	ft_strlcpy(dest2, src, sizeof(dest2));
	printf("dest2 (меньший размер): %s\n", dest2);
	// Печать длины строки
	printf("Длина исходной строки: %zu\n", ft_strlen(src));
	return (0);
}
*/
