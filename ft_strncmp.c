/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:04:44 by spitte            #+#    #+#             */
/*   Updated: 2026/10/28 12:50:00 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
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
