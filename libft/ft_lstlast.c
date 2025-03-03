/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:24:27 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 15:20:01 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main()
{
    // Создаем несколько узлов для теста
    t_list *lst = ft_lstnew("First");
    ft_lstadd_front(&lst, ft_lstnew("Second"));
    ft_lstadd_front(&lst, ft_lstnew("Third"));

    // Получаем последний элемент
    t_list *last = ft_lstlast(lst);
    
    // Печатаем содержимое последнего элемента
    if (last)
        printf("Last element content: %s\n", (char *)last->content);

    return 0;
}
*/