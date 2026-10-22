/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:29:36 by spitte            #+#    #+#             */
/*   Updated: 2026/10/22 16:32:22 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i])
		i++;
	while (src[j])
	{
		if (i < size - 1)
			dst[i] = src[j];
		i++;
		j++;
	}
	if (size > i)
		dst[i] = 0 ;
	else
		dst[size] = 0 ;
	return (i);
}
//#include <bsd/string.h>
//#include <stdio.h>
//int main()
//{
//	char a[] = "aaaaaaworld";
//	char b[] = "hello darkness my old friend";
//	size_t n1;
//        n1 = ft_strlcat(a, b, 60);
//        printf("ft:%s n:%zu\n",a,n1);
//	size_t n2;
//        char c[] = "aaaaaaworld";
//        char d[] = "hello darkness my old friend";
//        n2 = strlcat(c, d, 60);
//        printf("og:%s n:%zu\n",c,n2);
//}
// /*compiler avec "gcc ft_strlcat.c $(pkg-config --libs libbsd)" pour ce main,
// autrement le strlcat original ne marche pas */
//
