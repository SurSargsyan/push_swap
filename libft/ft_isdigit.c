/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:07:08 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 13:39:54 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	test_chars[] = {'0', '9', 'a', 'Z', '5', '!', ' ', '1'};
	int		i;

	i = 0;
	while (i < 8)
	{
		if (ft_isdigit(test_chars[i]))
			printf("'%c' es un dígito.\n", test_chars[i]);
		else
			printf("'%c' no es un dígito.\n", test_chars[i]);
		i++;
	}
	return (0);
}
*/
