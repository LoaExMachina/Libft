/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 16:59:33 by spitte            #+#    #+#             */
/*   Updated: 2026/11/07 17:16:52 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	inset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && inset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && inset(s1[end - 1], set))
		end--;
	return (ft_substr(s1, start, end - start));
}

//#include <stdio.h>
//#include <assert.h>
//int main()
//{
//	char *a = "acabweshweshacab";
//	const char *b = "abc";
//	printf("%s", ft_strtrim(a,b));
//
//}
