/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 11:21:08 by spitte            #+#    #+#             */
/*   Updated: 2026/11/06 13:19:51 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_countwords(char const *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 1;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			w++;
		i++;
	}
	if (s[i - 1] == c)
		w--;
	return (w);
}

size_t	ft_countletters(char const *s, char c, int n)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	j = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			w++;
		if (w == n && s[i] != c)
			j++;
		if (w > n)
			break ;
		i++;
	}
	return (j);
}

char	**free_all(char **words, size_t k)
{
	while (k > 0)
	{
		k--;
		free (words[k]);
	}
	free(words);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	is;
	size_t	iw;	

	if (!s)
		return (NULL);
	words = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	is = 0;
	iw = 0;
	while (iw < ft_countwords(s, c))
	{
		while (s[is] == c)
			is++;
		words[iw] = ft_substr(s, is, ft_countletters(s, c, iw));
		if (!words[iw])
			return (free_all(words, iw));
		is = is + ft_countletters(s, c, iw);
		iw++;
	}
	words[ft_countwords(s, c)] = NULL;
	return (words);
}

//#include <stdio.h>
//#include <assert.h>
//int	main()
//{
//	char *a="Un spectre hante l'Europe";
//	char b = ' ';
//	char **words = ft_split(a,b);
//	int i = 0;
//	if(words)
//		while (words[i])
//		{
//			printf("%s\n",words[i]);
//			free(words[i]);
//			i++;
//		}
//	free(words);
//}
