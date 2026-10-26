/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 09:53:49 by spitte            #+#    #+#             */
/*   Updated: 2026/10/26 10:34:43 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*n;

	n = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *) &s [i]);
		i++;
	}
	return (n);
}
//#include <stdio.h>
//#include <string.h>
//int main(int argc, char** argv)
//{
//	(void)argc;
//	printf("ft:%p\n",ft_strchr(argv[1],'a'));
//	printf("og:%p\n",strchr(argv[1],'a'));
//}
