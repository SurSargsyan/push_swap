/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:43:04 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/09 15:38:55 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*list_ptr;

	if (!lst)
		return ;
	list_ptr = lst;
	while (list_ptr != NULL)
	{
		(*f)(list_ptr->content);
		list_ptr = list_ptr->next;
	}
}
/*
void print_content(void *content)
{
    printf("%s\n", (char *)content);
}
int main()
{
    // Create a new linked list with some string contents
    t_list *lst = ft_lstnew("Hello");
    ft_lstadd_back(&lst, ft_lstnew("World"));
    ft_lstadd_back(&lst, ft_lstnew("This"));
    ft_lstadd_back(&lst, ft_lstnew("Is"));
    ft_lstadd_back(&lst, ft_lstnew("ft_lstiter"));

    // Apply ft_lstiter to print each node's content
    printf("List content:\n");
    ft_lstiter(lst, print_content);

    // Free memory after usage (important in real use)
    while (lst != NULL)
    {
        t_list *temp = lst;
        lst = lst->next;
        free(temp);
    }

    return 0;
}
//camondo cc
// cc ft_lstiter.c ft_lstadd_back.c ft_lstnew.c ft_lstlast.c
*/
/*  resultado
  List content:
Hello
World
This
Is
ft_lstiter

*/