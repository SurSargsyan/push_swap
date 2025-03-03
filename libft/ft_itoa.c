/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:56:35 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/12 12:01:34 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_char(char *s, unsigned int number, long int len)
{
	while (number > 0)
	{
		s[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (s);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char				*s;
	long int			len;
	unsigned int		number;
	int					sign;

	sign = 1;
	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!(s))
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		number = n * -1;
		s[0] = '-';
	}
	else
		number = n;
	s = ft_char(s, number, len);
	return (s);
}
/*
int main(void)
{
    // Пример чисел для тестирования
    int num1 = 123;
    int num2 = -456;
    int num3 = 0;
    int num4 = 2147483647;  // Максимальное значение для int
    int num5 = -2147483648; // Минимальное значение для int

    // Преобразуем числа в строки с помощью ft_itoa
    char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);
    char *str3 = ft_itoa(num3);
    char *str4 = ft_itoa(num4);
    char *str5 = ft_itoa(num5);

    // Проверка результатов
    printf("ft_itoa(%d) = \"%s\"\n", num1, str1);
    printf("ft_itoa(%d) = \"%s\"\n", num2, str2);
    printf("ft_itoa(%d) = \"%s\"\n", num3, str3);
    printf("ft_itoa(%d) = \"%s\"\n", num4, str4);
    printf("ft_itoa(%d) = \"%s\"\n", num5, str5);

    // Освобождение памяти после использования
    free(str1);
    free(str2);
    free(str3);
    free(str4);
    free(str5);

    return 0;
}
*/