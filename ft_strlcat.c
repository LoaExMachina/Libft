/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:29:36 by spitte            #+#    #+#             */
/*   Updated: 2026/11/07 12:46:05 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lens;
	size_t	lend;

	lens = ft_strlen(src);
	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	lend = i;
	if (size <= lend)
		return(size + lens);
	while (src[j] && i < size -1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (lend  + lens);
}
//#include <bsd/string.h>
//#include <stdio.h>
//int main()
//{
//	char a[39] = "aaaaaaworld";
//	char b[] = "hello darkness my old friend";
//	size_t n1;
//        n1 = ft_strlcat(a, b, 39);
//        printf("ft:%s n:%zu\n",a,n1);
//	size_t n2;
//        char c[39] = "aaaaaaworld";
//        n2 = strlcat(c, b, 39);
//        printf("og:%s n:%zu\n",c,n2);
//	char *src = (char *)"AAAAAAAAA";
//	char dest[30]; memset(dest, 0, 30);
//	memset(dest, 'B', 4);
//	size_t n = ft_strlcat(dest, src, 6);
//        printf("ft:%s n:%zu\n",dest,n);
//
//}
