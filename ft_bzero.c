/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:53:09 by spitte            #+#    #+#             */
/*   Updated: 2026/10/28 12:48:08 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*tab;

	tab = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		tab[i] = 0;
		i++;
	}
	return (s);
}
//#include <stdlib.h>
//#include <stdio.h>
//int main()
//{
//	char a[]= "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
//	ft_bzero(a+1,3);
//	int i;
//	i=0;
//	printf("ft: %s \n %s \n %s \n",a, a+3,a+5);
//	char b[]= "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
//	bzero(b+1,3);
//	printf("og: %s \n %s \n %s",b, b+3, b+5);
//
//}
