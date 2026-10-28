/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 16:59:17 by spitte            #+#    #+#             */
/*   Updated: 2026/10/28 17:20:13 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"


char	*ft_strdup(const char *src)
{
	char	*dest;

	if (src == NULL)
		return(NULL);
	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	dest = ft_strlcpy(dest, src, ft_strlen(dest)+1);
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
