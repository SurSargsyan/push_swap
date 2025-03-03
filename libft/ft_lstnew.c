/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:57:41 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/10 19:09:58 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*
int main(void)
{
    // Пример содержимого для нового узла списка
    char *str = "Hello, List!";
    
    // Создание нового элемента списка
    t_list *new_node = ft_lstnew(str);

    // Проверка, был ли узел успешно создан
    if (new_node == NULL)
    {
        printf("Failed to create new node\n");
        return (1);
    }

    // Печать содержимого нового узла
    printf("New node content: %s\n", (char *)new_node->content);

    // Освобождение памяти для узла (при необходимости)
    free(new_node);
	

    return (0);
}
*/