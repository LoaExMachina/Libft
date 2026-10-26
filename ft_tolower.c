/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 09:21:02 by spitte            #+#    #+#             */
/*   Updated: 2026/10/26 09:43:10 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - ('A' - 'a'));
	else
		return (c);
}

//#include <stdio.h>
//#include <ctype.h>
//int	main(int argc, char** argv)
//{
//	(void)argc;
//	printf("ft:%c\n", ft_tolower(argv[1][0]));
//	printf("og:%c\n", tolower(argv[1][0]));
//}
