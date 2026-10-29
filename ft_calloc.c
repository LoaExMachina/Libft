/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:29:33 by spitte            #+#    #+#             */
/*   Updated: 2026/10/29 15:28:22 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	maxnm;

	ptr = NULL;
	if (nmemb > 0 && size > 0)
	{
		maxnm = 65535 / size;
		if (nmemb <= maxnm / size)
		{
			ptr = ft_bzero(malloc(nmemb * size), size);
		}
	}
	return (ptr);
}

//int main()
//{
//	size_t s = 0;
//	size_t n = 400000;
//	void* ptr = ft_calloc(n,s);
//	size_t i = 0;
//	size_t nb = n*s;
//	unsigned char* charpt = (unsigned char*)ptr;
//
//	for (i=0; i < nb ; i++)
//	{
//		charpt[i] = 'a';
//	}
//	printf("%s",charpt);
//}
