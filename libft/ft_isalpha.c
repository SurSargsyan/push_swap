/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:02:53 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 13:38:41 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	test_chars[] = {'A', 'z', '1', '!', 'b', 'Z', '5'};
	int		i;

	i = 0;
	while (i < 7)
	{
		if (ft_isalpha(test_chars[i]))
			printf("'%c' es una letra.\n", test_chars[i]);
		else
			printf("'%c' no es una letra.\n", test_chars[i]);
		i++;
	}
	return (0);
}
*/