/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 09:53:49 by spitte            #+#    #+#             */
/*   Updated: 2026/11/09 14:18:27 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	c = c % 256;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *) &s [i]);
		i++;
	}
	if (c == 0)
		return ((char *)s + i);
	return (NULL);
}
//#include <stdio.h>
//#include <string.h>
//int main(int argc, char** argv)
//{
//	(void)argc;
//	printf("ft:%p\n",ft_strchr(argv[1],'a'));
//	printf("og:%p\n",strchr(argv[1],'a'));
//}
