/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:41:21 by spitte            #+#    #+#             */
/*   Updated: 2026/11/09 14:21:14 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		free(str);
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		str[i] = f(i, ((char *)s)[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}

//char    maj_si_pair(unsigned int i, char c)
//{
//    if (i % 2 == 0)
//        return (ft_toupper(c));
//    return (c);
//}
//
//#include <stdio.h>
//int main()
//{
//	char    *r;
//
//	r = ft_strmapi("hello", maj_si_pair);
//	printf("[%s]\n", r);   // [HeLlO]
//	free(r);
//}
