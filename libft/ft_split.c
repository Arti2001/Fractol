/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amysiv <amysiv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:27:05 by amysiv            #+#    #+#             */
/*   Updated: 2023/10/31 15:02:37 by amysiv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_words(int i, char **ptr)
{
	while (i > 0)
	{
		free(ptr[i - 1]);
		i--;
	}
	free(ptr);
}

static char	*ft_wl(const char *str, char c)
{
	char	*wl;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	wl = (char *)malloc(sizeof(char) * (i + 1));
	if (!wl)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		wl[i] = str[i];
		i++;
	}
	wl[i] = '\0';
	return (wl);
}

static int	ft_wrdcnt(char const *str, char c)
{
	int	w;

	w = 0;
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			w++;
			while (*str && (*str != c))
				str++;
		}
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr_words;
	int		words;
	int		i;

	if (s == NULL)
		return (NULL);
	words = ft_wrdcnt(s, c);
	ptr_words = (char **)malloc(sizeof(char *) * (words + 1));
	if (ptr_words == NULL)
		return (NULL);
	i = 0;
	while (words > i)
	{
		while (*s && *s == c)
			s++;
		ptr_words[i] = ft_wl(s, c);
		if (ptr_words[i] == NULL)
			return (free_words(i, ptr_words), NULL);
		while (*s && *s != c)
			s++;
		i++;
	}
	ptr_words[i] = NULL;
	return (ptr_words);
}

// int main()
//{
//	int i;
//	char **arr;
//	i = 0;
//	//arr = ft_split("        hello     world ja artem", ' ');
//	arr = ft_split("hello!", ' ');
//	while (arr[i])
//	{
//		printf("%s\n", arr[i]);
//		i++;
//	}
// }