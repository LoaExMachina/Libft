/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 13:49:10 by spitte            #+#    #+#             */
/*   Updated: 2026/10/28 12:49:13 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

//#include <stdio.h>
//#include <assert.h>
//int main()
//{
//	//printf("og:%d\n",memcmp(argv[1],argv[2],argv[3][0]));
//	//printf("ft: %d\n",ft_memcmp(argv[1],argv[2],argv[3][0]));
//	printf("og:%d\n",memcmp("aab","aac",3));
//	printf("ft: %d\n",ft_memcmp("aab","aac",3));
//}
