/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:46:44 by spitte            #+#    #+#             */
/*   Updated: 2026/10/20 12:09:46 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memset(int *s, int c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
}
//#include <stdio.h>
//#include <stdlib.h>
//int main(int argc, char** argv)
//{
//	(void)argc;
//	int a[3]={0, 0, 0};
//	ft_memset(a, atoi(&argv[1][0]), atoi(&argv[2][0]));
//	int i;
//	i=0;
//	while (a[i]!=0)
//	{
//		printf("%d",a[i]);
//		i++;
//	}
//
//}
