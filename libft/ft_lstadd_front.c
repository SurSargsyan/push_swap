/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:03:13 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/10 19:41:05 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
// Функция для печати списка
void ft_print_list(t_list *lst)
{
    while (lst != NULL)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }
}

int main(void)
{
    // Создание элементов списка
    t_list *node1 = ft_lstnew("First");
    t_list *node2 = ft_lstnew("Second");
    t_list *node3 = ft_lstnew("Third");

    // Инициализация списка с первым элементом
    t_list *list = node1;

    // Добавление элементов в начало списка
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node3);

    // Печать списка
    printf("List contents:\n");
    ft_print_list(list);

    // Освобождение памяти
    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/
