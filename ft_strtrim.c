/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 16:59:33 by spitte            #+#    #+#             */
/*   Updated: 2026/10/31 11:17:55 by spitte           ###   ########.fr       */
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
	char	*str;
	int		i;
	int		j;

	str = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!str || !s1)
		return (NULL);
	i = 0;
	j = 0;
	while (inset(s1[i], set))
		i++;
	while (s1[i])
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	j--;
	while (inset(str[j], set))
	{
		str[j] = 0;
		j--;
	}
	return (str);
}

//#include <stdio.h>
//#include <assert.h>
//int main()
//{
//	char *a = "";
//	const char *b = "abc";
//	printf("%s", ft_strtrim(a,b));
//
//}
