/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:58:23 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/10 18:55:19 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	length;
	char			*res;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	res = malloc((length + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
char example_function(unsigned int i, char c)
{
    //если индекс четный, делаем символ заглавным, если нечетный - строчным
    if (i % 2 == 0)
        return (c - 32); // Преобразуем в заглавную букву
    else
        return (c + 32); // Преобразуем в строчную букву
}

int main(void)
{
    // Пример строки
    char *str = "abcdef";

    // Применяем ft_strmapi
    char *result = ft_strmapi(str, example_function);

    // Выводим результат
    printf("Original string: %s\n", str);
    printf("Transformed string: %s\n", result);

    // Освобождение памяти после использования
    free(result);

    return 0;
}
*/