/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:37:27 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 15:33:09 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
}
/*
void del(void *content) {
    free(content);  // Эта функция освобождает память, занятую содержимым узла
}

int main()
{
    // Create the linked list with some content
    t_list *lst = ft_lstnew(malloc(sizeof(char) * 6));  // "First"
    ft_memcpy(lst->content, "First", 5);
    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(char) * 6)));  // "Second"
    ft_memcpy(lst->next->content, "Second", 6);
    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(char) * 6)));  // "Third"
    ft_memcpy(lst->next->next->content, "Third", 5);

    // Print the list to check its content before clearing
    t_list *temp = lst;
    printf("Before ft_lstclear:\n");
    while (temp != NULL)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }

    // Clear the linked list and free its content
    ft_lstclear(&lst, del);

    // Print the list after clearing
    if (lst == NULL)
    {
        printf("\nList has been cleared.\n");
    }

    return 0;
}

// comando cc 
// cc -c ft_lstnew.c ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c ft_memcpy.c
*/