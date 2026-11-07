/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:04:44 by spitte            #+#    #+#             */
/*   Updated: 2026/11/07 11:16:28 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char *s_1;
	unsigned char *s_2;

	s_1 = (unsigned char *)s1;
	s_2 = (unsigned char *)s2;
	
	i = 0;
	while ((s_1[i] || s_2[i]) && i < n)
	{
		if (s_1[i] != s_2[i])
			return (s_1[i] - s_2[i]);
		i++;
	}
	return (0);
}

//#include <stdio.h>
//#include <assert.h>
//int main(int argc, char** argv)
//{
//	assert(argc == 4);
//	printf("og:%d\n",strncmp(argv[1],argv[2],argv[3][0]));
//	printf("ft: %d\n",ft_strncmp(argv[1],argv[2],argv[3][0]));
//}
