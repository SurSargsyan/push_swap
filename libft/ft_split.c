/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:03:00 by susargsy          #+#    #+#             */
/*   Updated: 2025/02/25 11:54:04 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_array(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (0);
}

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_putword(char *word, char const *s, int i, int world_len)
{
	int	j;

	j = 0;
	while (world_len > 0)
	{
		word[j] = s[i - world_len];
		j++;
		world_len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_split_words(char const *s, char c, char **s2, int num_words)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		s2[word] = (char *)malloc(sizeof(char) * (word_len +1));
		if (!s2)
			return (free_array(s2, word));
		ft_putword(s2[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	s2[word] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	num_words;

	if (!s)
		return (0);
	num_words = ft_count_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (num_words +1));
	if (!s2)
		return (0);
	s2 = ft_split_words(s, c, s2, num_words);
	return (s2);
}
/*
int main(void)
{
    // Пример строки и разделителя
    char *s = "Hello world! This is a test.";
    char delimiter = 's';  // Разделитель - пробел

    // Разделение строки на слова
    char **result = ft_split(s, delimiter);

    // Проверка результата
    if (result)
    {
        // Выводим результат
        int i = 0;
        while (result[i] != NULL)
        {
            printf("Word %d: '%s'\n", i + 1, result[i]);
            free(result[i]);  // Освобождаем память после использования
            i++;
        }
        free(result);  // Освобождаем память для массива указателей
    }
    else
    {
        printf("Ошибка при разделении строки!\n");
    }

    return 0;
}
*/