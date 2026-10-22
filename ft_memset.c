/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:46:44 by spitte            #+#    #+#             */
/*   Updated: 2026/10/22 11:38:01 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tab;

	tab = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		tab[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
//#include <stdlib.h>
//#include <stdio.h>
//int main()
//{
//	char a[]= "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
//	ft_memset(a,'6',3);
//	int i;
//	i=0;
//	while (a[i])
//	{
//		printf("%c",a[i]);
//		i++;
//	}
//
//}
