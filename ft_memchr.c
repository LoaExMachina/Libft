/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:50:37 by spitte            #+#    #+#             */
/*   Updated: 2026/10/26 12:28:59 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*nul;

	nul = 0;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (nul);
}

//#include <stdio.h>
//#include <assert.h>
//int main(int argc, char** argv)
//{
//	assert (argc == 4);
//	printf("og:%p\n",memchr(argv[1], argv[2][0], argv[3][0]));
//	printf("ft:%p\n",ft_memchr(argv[1], argv[2][0], argv[3][0]));
//}
