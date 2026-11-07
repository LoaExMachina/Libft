/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:30:13 by spitte            #+#    #+#             */
/*   Updated: 2026/11/07 10:06:46 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	if (dest == src)
		return (dest);
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (d > s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

//#include <stdio.h>
//int main()
//{
//	char a[] = "hello world";
//	ft_memmove(a, a+6, 5);
//	printf("ft:%s\n",a);
//	char c[] = "hello world";
//	memmove(c, c+6, 5);
//	printf("og:%s\n",c);
//}
