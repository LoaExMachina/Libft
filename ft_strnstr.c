/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 10:06:03 by spitte            #+#    #+#             */
/*   Updated: 2026/10/28 12:50:05 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*nihil;

	nihil = NULL;
	i = 0;
	j = 0;
	while (big[i] && i <= len)
	{
		if ((!j && big[i] == little[0]) || (j && big[i] == little[j]))
			j++;
		else
		{
			if (little[j] == 0)
				return (& ((char *)big)[i - j]);
			j = 0;
		}
		i++;
	}
	return (nihil);
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
