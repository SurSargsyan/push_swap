/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:39:06 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/10 18:56:08 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
/*
// Пример функции, которая изменяет символы строки
void example_function(unsigned int i, char *c)
{
    //если индекс четный, делаем символ заглавным, если нечетный - строчным
    if (i % 2 == 0)
        *c = *c - 32;  // Преобразуем в заглавную букву
    else
        *c = *c + 32;  // Преобразуем в строчную букву
}

int main(void)
{
    // Пример строки
    char str[] = "abcdef"; // Используем массив, чтобы можно было изменять строку

    // Применяем ft_striteri
    ft_striteri(str, example_function);

    // Выводим результат
    printf("Transformed string: %s\n", str);

    return 0;
}
*/