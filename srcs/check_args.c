/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:35:42 by susargsy          #+#    #+#             */
/*   Updated: 2025/02/25 11:40:49 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "utils.h"
#include "free.h"

void	check_duplicates(int *unordered, int size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (unordered[i] == unordered[j])
			{
				free(unordered);
				error_message("Error\n");
			}
			++j;
		}
	}
}

void	check_num1(char *num, char **temp)
{
	int	len;

	len = ft_strlen(num);
	if ((num[0] == '+' || num[0] == '-') && num[1] == '0')
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
	else if (num[0] == '0' && num[1] != '\0')
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
	else if (num[0] == '-' && num[1] == '\0')
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
	else if (num[0] == '+' && num[1] == '\0')
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
	else if (len < 10)
		return ;
	else if (((num[0] == '+' || num[0] == '-') && len > 11)
		|| (ft_isdigit(num[0]) == 1 && len > 10))
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
	else if (num[0] == '+' && (ft_strncmp(num, "+2147483647", len) > 0))
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
	else if (num[0] == '-' && (ft_strncmp(num, "-2147483648", len) > 0))
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
	else if (ft_strncmp(num, "2147483647", len) > 0)
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
}

void	check_num(char *num, char **temp, int *nums_count)
{
	int	i;

	i = 0;
	*nums_count += 1;
	if (!ft_isdigit(num[0]) && num[0] != '+' && num[0] != '-')
		free_and_exit(temp, get_matrix_size(temp), "Error\n");
	while (num[++i])
		if (!ft_isdigit(num[i]))
			free_and_exit(temp, get_matrix_size(temp), "Error\n");
	check_num1(num, temp);
}

int	get_nums_count(char **argv)
{
	int		i;
	int		j;
	char	**temp;
	int		nums_count;

	i = 0;
	nums_count = 0;
	while (argv[++i])
	{
		temp = ft_split(argv[i], ' ');
		if (!temp)
			error_message("Error\n");
		else if (temp[0] == NULL)
			free_matrix(temp, 1);
		else
		{
			j = -1;
			while (temp[++j])
				check_num(temp[j], temp, &nums_count);
			free_matrix(temp, get_matrix_size(temp));
		}
	}
	return (nums_count);
}

int	check_args(int argc, char **argv)
{
	int	nums_count;

	nums_count = 0;
	if (argc < 2)
		exit(EXIT_SUCCESS);
	nums_count = get_nums_count(argv);
	if (nums_count == 0)
		error_message("Error\n");
	return (nums_count);
}