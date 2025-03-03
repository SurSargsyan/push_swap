/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:43:03 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/26 11:36:42 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			j;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	j = 1;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		j = -1;
		d += n - 1;
		s += n - 1;
	}
	while (i < n)
	{
		*d = *s;
		d += j;
		s += j;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "Hello, World!";

	printf("До ft_memmove:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	// Перемещение части строки внутри строки (с перекрытием)
	ft_memmove(str1 + 7, str1, 6); // Копируем "Hello," с 7-го символа
	printf("\nПосле ft_memmove (перекрытие):\n");
	printf("str1: %s\n", str1);
	// Для сравнения с оригинальной memmove
	char	str3[] = "Hello, World!";
	ft_memmove(str3 + 7, str3, 6); // Копируем "Hello," с 7-го символа
	printf("\nПосле memmove (перекрытие):\n");
	printf("str3: %s\n", str3);
	return (0);
}
*/