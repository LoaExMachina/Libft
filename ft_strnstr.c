/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 10:06:03 by spitte            #+#    #+#             */
/*   Updated: 2026/11/09 14:17:50 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!(little[0]))
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && i + j < len && big[i + j] == little[j])
			j++;
		if (!little[j])
			return ((char *)(&big[i]));
		i++;
	}
	return (NULL);
}

//#include <bsd/string.h>
//#include <stdio.h>
//int main()
//{
//	char* biggy = "Proletaires de tous pays, unissez-vous !";
//	char* smalls = "d";
//	printf("og: %p \n ft: %p",strnstr(biggy, smalls, 25),
//	ft_strnstr(biggy, smalls, 25));
//}
