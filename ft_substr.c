/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:50:47 by spitte            #+#    #+#             */
/*   Updated: 2026/10/29 15:38:44 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr;

	ptr = ft_calloc(len+1, sizeof(char));
	ft_strlcpy(ptr, s + start, len + 1);
	if (*ptr == 0)
		return(NULL);
	return(ptr);
}

//#include <assert.h>
//#include <stdio.h>
//int main(int argc, char** argv)
//{
//	assert(argc == 4);
//	char *str = ft_substr(argv[1], ft_atoi(&argv[2][0]), ft_atoi(&argv[3][0]));
//	printf("%s",str);
//}
