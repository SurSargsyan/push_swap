/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:33:09 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 15:26:31 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	(*del)(lst->content);
	free(lst);
}
/*
void	del(void *content)
{
    free(content);
}

int main()
{
    // Создаем несколько узлов для теста
    t_list *lst = ft_lstnew(strdup("First"));
    ft_lstadd_back(&lst, ft_lstnew(strdup("Second")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("Third")));

    // Печатаем все элементы списка перед удалением
    t_list *current = lst;
    printf("Before deletion:\n");
    while (current != NULL)
    {
        printf("Content: %s\n", (char *)current->content);
        current = current->next;
    }

    // Удаляем второй элемент
    ft_lstdelone(lst->next, del);  // Удаляем второй элемент

    // Печатаем все элементы списка после удаления
    current = lst;
    printf("\nAfter deletion:\n");
    while (current != NULL)
    {
        printf("Content: %s\n", (char *)current->content);
        current = current->next;
    }

    return 0;
}

//comando para cc 
//cc ft_lstdelone.o ft_lstadd_back.o ft_lstnew.o 
ft_lstlast.o -o ft_lstdelone_test

*/