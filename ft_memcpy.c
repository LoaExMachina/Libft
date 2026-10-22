/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:14:49 by spitte            #+#    #+#             */
/*   Updated: 2026/10/22 12:49:16 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

//#include <stdio.h>
//int main()
//{
//	char a[] = "aaaaaaworld";
//	char b[] = "hello darkness my old friend";
//	ft_memcpy(a, b, 6);
//	printf("ft:%s\n",a);
//	char c[] = "aaaaaaworld";
//	char d[] = "hello darkness my old friend";
//	memcpy(c, d, 6);
//	printf("og:%s\n",c);
//}
