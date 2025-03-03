/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:29:22 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/11 11:02:29 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}
/*
int main(void)
{
	// Пример строк для преобразования
	const char *str1 = "   12345";
	const char *str2 = "-42";
	const char *str3 = "42abc";
	const char *str4 = "   +100";
	const char *str5 = "    -0";
	// Преобразование строк в целые числа
	int result1 = ft_atoi(str1);
	int result2 = ft_atoi(str2);
	int result3 = ft_atoi(str3);
	int result4 = ft_atoi(str4);
	int result5 = ft_atoi(str5);
	// Выводим результаты
	printf("Строка '%s' преобразована в целое число: %d\n", str1, result1);
	printf("Строка '%s' преобразована в целое число: %d\n", str2, result2);
	printf("Строка '%s' преобразована в целое число: %d\n", str3, result3);
	printf("Строка '%s' преобразована в целое число: %d\n", str4, result4);
	printf("Строка '%s' преобразована в целое число: %d\n", str5, result5);
	return 0;
}
*/
