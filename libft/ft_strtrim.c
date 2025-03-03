/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:57:52 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/10 18:28:18 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_check_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (ft_check_set(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (ft_check_set(s1[size - 1], set) == 1)
			size--;
		else
			break ;
	}
	new = (char *)malloc(size * sizeof(char) + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, (char *)s1, size + 1);
	return (new);
}
/*
int main(void)
{
	// Пример строки и набора символов для обрезки
	char *s1 = "   xxxHello, world!xxx   ";
	char *set = " x"; // Удаляем пробелы и символы 'x'

	// Выполняем обрезку строки с помощью ft_strtrim
	char *result = ft_strtrim(s1, set);

	// Проверка результата
	if (result)
	{
		printf("Исходная строка: '%s'\n", s1);
		printf("Строка после обрезки: '%s'\n", result);
		free(result);  // Освобождаем память после использования
	}
	else
	{
		printf("Ошибка выделения памяти для обрезанной строки!\n");
	}

	return 0;
}*/