/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:23:56 by spitte            #+#    #+#             */
/*   Updated: 2026/11/07 11:33:50 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < size -1)
	{
		if (i < size - 1)
			dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

//#include <bsd/string.h>
//#include <stdio.h>
//int main()
//{
//	char a[] = "abcdeworld";
//	char b[] = "hello darkness my old friend";
//	size_t n1;
//        n1 = ft_strlcpy(a, b, 9);
//        printf("ft:%s n:%zu\n",a,n1);
//	size_t n2;
//        char c[] = "abcdeworld";
//        char d[] = "hello darkness my old friend";
//        n2 = strlcpy(c, d, 9);
//        printf("og:%s n:%zu\n",c,n2);
//}
