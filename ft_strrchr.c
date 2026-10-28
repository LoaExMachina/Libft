/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 09:53:49 by spitte            #+#    #+#             */
/*   Updated: 2026/10/26 10:58:12 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = 0;
	i = 0;
	while (s[i])
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
