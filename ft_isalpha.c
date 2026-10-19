/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:08:38 by spitte            #+#    #+#             */
/*   Updated: 2026/10/19 12:51:19 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ischar(int c)
{
	if(((c >= 'a')&&(c <= 'z'))||((c>='A') && (c<='Z')))
		return(1);
	else
		return(0);
}
	
//int main(int argc,char** argv)
//{
//#include <stdio.h>
//	(void)argc;
//	printf("%d", ft_ischar(argv[1][0]));
//}
