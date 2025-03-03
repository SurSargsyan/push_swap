/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:29:00 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 15:21:55 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
/*
int main()
{
    // Создаем несколько узлов для теста
    t_list *lst = ft_lstnew("First");
    ft_lstadd_back(&lst, ft_lstnew("Second"));
    ft_lstadd_back(&lst, ft_lstnew("Third"));

    // Печатаем все элементы списка
    t_list *current = lst;
    while (current != NULL)
    {
        printf("Content: %s\n", (char *)current->content);
        current = current->next;
    }

    return 0;
}
*/