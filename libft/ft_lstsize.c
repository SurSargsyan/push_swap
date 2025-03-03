/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:06:03 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 15:17:04 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int main()
{
    // Создание связанного списка
    t_list *lst = ft_lstnew("First");
    ft_lstadd_front(&lst, ft_lstnew("Second"));
    ft_lstadd_front(&lst, ft_lstnew("Third"));

    // Получаем размер списка
    int size = ft_lstsize(lst);
    printf("List size: %d\n", size);  // Ожидается вывод: List size: 3


    return 0;
}
*/