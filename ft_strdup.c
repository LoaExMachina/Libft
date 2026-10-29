/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 16:59:17 by spitte            #+#    #+#             */
/*   Updated: 2026/10/29 11:49:34 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"


char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	i;
	size_t size;

	i = 0;
	if (src == NULL)
		return(NULL);
	size = ft_strlen(src) + 1;
	dest = malloc(size * sizeof(char));
	while (i < size -1 && src[i])
	{
		dest[i] = ((char *)src)[i];
		i++;
	}
	dest[i] = 0;

	return (dest);
}

int main(int argc, char **argv)
{
#include <stdio.h>
#include <string.h>
	int i;
	char *dest;
	i = 0;
	(void)argc;
	dest = ft_strdup(argv[1]);
	printf("%s",dest);
}
