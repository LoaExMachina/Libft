/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 09:53:49 by spitte            #+#    #+#             */
/*   Updated: 2026/11/07 10:37:15 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;

	ptr = NULL;
	c = c % 256;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == c)
			ptr = (char *)&s[i];
		i++;
	}
	return (ptr);
}
//#include <stdio.h>
//#include <string.h>
//int main(int argc, char** argv)
//{
//	(void)argc;
//	printf("ft:%p\n",ft_strrchr(argv[1],'a'));
//	printf("og:%p\n",strrchr(argv[1],'a'));
//}
