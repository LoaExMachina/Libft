/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:23:56 by spitte            #+#    #+#             */
/*   Updated: 2026/10/22 16:01:07 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		if (i < size - 1)
			dst[i] = src[i];
		i++;
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
//        n1 = ft_strlcpy(a, b, 6);
//        printf("ft:%s n:%zu\n",a,n1);
////	size_t n2;
////        char c[] = "aaaaaaworld";
////        char d[] = "hello darkness my old friend";
////        n2 = strlcpy(c, d, 6);
////        printf("og:%s n:%zu\n",c,n2);
//}
/* compiler avec "gcc ft_strlcpy.c $(pkg-config --libs libbsd)" pour ce main,
 * autrement le strlcpy original ne marche pas */
