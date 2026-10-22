/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:30:13 by spitte            #+#    #+#             */
/*   Updated: 2026/10/22 14:16:32 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	tempo;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	while (i < n)
	{
		tempo = s[i];
		d[i] = tempo;
		i++;
	}
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
