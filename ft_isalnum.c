/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:41:56 by spitte            #+#    #+#             */
/*   Updated: 2026/11/06 17:44:44 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z' )))
		|| ((c >= '0') && (c <= '9')))
		return (1);
	else
		return (0);
}

//int main(int argc,char** argv)
//{
//#include <stdio.h>
//	(void)argc;
//	printf("%d", ft_isalnum(argv[1][0]));
//}
