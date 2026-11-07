/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:50:47 by spitte            #+#    #+#             */
/*   Updated: 2026/11/07 15:49:25 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	lens;
	size_t	sublen;

	if (!s)
		return (NULL);
	lens = ft_strlen(s);
	if (start >= lens)
		return (ft_strdup(""));
	sublen = lens - start;
	if (len < sublen)
		sublen = len;
	ptr = malloc((sublen + 1));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s + start, sublen);
	ptr[sublen] = 0;
	return (ptr);
}

//#include <assert.h>
//#include <stdio.h>
//int main(int argc, char** argv)
//{
//	//assert(argc == 4);
//	(void)argc;
//	char *str = ft_substr(argv[1], ft_atoi(&argv[2][0]), ft_atoi(&argv[3][0]));
//	printf("%s",str);
//}
