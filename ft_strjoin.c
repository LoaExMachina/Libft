/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:50:14 by spitte            #+#    #+#             */
/*   Updated: 2026/11/09 15:30:50 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*protectcalloc(char *str)
{
	free(str);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = ft_calloc(sizeof(char), len + 1);
	if (!str)
		return (protectcalloc(str));
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}

//#include <stdio.h>
//#include <assert.h>
//int main(int argc, char** argv)
//{
//	assert(argc == 3);
//	char* str = ft_strjoin(argv[1], argv[2]);
//	printf("%s",str);
//}
