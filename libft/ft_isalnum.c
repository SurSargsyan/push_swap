/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:44:24 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 13:40:50 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	test_chars[] = {'0', '9', 'a', 'Z', '5', '!', ' ', '1', '#'};
	int		i;

	i = 0;
	while (i < 9)
	{
		if (ft_isalnum(test_chars[i]))
			printf("'%c' es alfanumérico.\n", test_chars[i]);
		else
			printf("'%c' no es alfanumérico.\n", test_chars[i]);
		i++;
	}
	return (0);
}
*/
