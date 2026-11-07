/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:29:33 by spitte            #+#    #+#             */
/*   Updated: 2026/11/07 14:54:49 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ptr = ft_bzero(ptr, nmemb * size);
	return (ptr);
}

//#include <stdio.h>
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
