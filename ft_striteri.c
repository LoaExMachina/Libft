/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:37:25 by spitte            #+#    #+#             */
/*   Updated: 2026/11/03 16:25:08 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}

//void majifodd(unsigned int n, char *p)
//{
//	if (n % 2 == 1)
//		*p = ft_toupper(*p);
//}
//
//#include <stdio.h>
//int main()
//{
//	char s[] = "proletaires de tous pays, unissez vous!";
//	ft_striteri(s,majifodd);
//	printf("%s",s);
//}
