/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 09:21:02 by spitte            #+#    #+#             */
/*   Updated: 2026/10/26 09:40:28 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	else
		return (c);
}

//#include <stdio.h>
//#include <ctype.h>
//int	main(int argc, char** argv)
//{
//	(void)argc;
//	printf("ft:%c\n", ft_toupper(argv[1][0]));
//	printf("og:%c\n", toupper(argv[1][0]));
//}
