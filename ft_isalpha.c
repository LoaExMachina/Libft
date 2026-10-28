/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:08:38 by spitte            #+#    #+#             */
/*   Updated: 2026/10/28 12:48:27 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z' )))
		return (1);
	else
		return (0);
}
//int main(int argc,char** argv)
//{
//#include <stdio.h>
//	(void)argc;
//	printf("%d", ft_isalpha(argv[1][0]));
//}
