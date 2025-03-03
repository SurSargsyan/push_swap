/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:50:07 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 15:47:48 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!f || !lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&node, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
/*
void *to_uppercase(void *content)
{
    char *str = (char *)content;
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return str;
}

// Function to free memory of node content
void del(void *content)
{
    free(content); // Free the content of the node
}

int main()
{
    // Create a linked list with manually allocated string content
    t_list *lst = ft_lstnew(malloc(6 * sizeof(char)));
    strcpy((char *)lst->content, "hello");

    ft_lstadd_back(&lst, ft_lstnew(malloc(6 * sizeof(char))));
    strcpy((char *)lst->next->content, "world");

    ft_lstadd_back(&lst, ft_lstnew(malloc(6 * sizeof(char))));
    strcpy((char *)lst->next->next->content, "libft");

    // Print original list
    t_list *temp = lst;
    printf("Original List:\n");
    while (temp != NULL)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }

    // Apply ft_lstmap
    t_list *new_lst = ft_lstmap(lst, to_uppercase, del);

    // Print new list
    printf("\nMapped List (to uppercase):\n");
    temp = new_lst;
    while (temp != NULL)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }

    // Clean up the lists
    ft_lstclear(&lst, del);
    ft_lstclear(&new_lst, del);

    return 0;
}

// comando para cc 
// ft_lstmap.c ft_lstadd_back.c ft_lstnew.c ft_lstlast.c 
// ft_lstclear.c ft_lstdelone.c ft_strlen.c
*/