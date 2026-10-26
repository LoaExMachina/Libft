/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:56:04 by spitte            #+#    #+#             */
/*   Updated: 2026/10/26 14:53:22 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	order;
	int	nbstart;
	int	nb;

	i = 0;
	nb = 0;
	order = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			order = order * (-1);
		i++;
	}
	nbstart = i;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (i > nbstart)
	{
		i-- ;
		nb = nb + (str[i] - '0') * order;
		order = order * 10;
	}
	return (nb);
}

//#include <stdio.h>
//int	main()
//{
//	printf("%d", ft_atoi("100"));
//	printf("\n%d", ft_atoi("90"));
//	printf("\n%d", ft_atoi("5"));
//	printf("\n%d", ft_atoi("0100"));
//	printf("\n%d", ft_atoi("2147483647"));
//	printf("\n%d", ft_atoi("-2147483648"));
//	printf("\n%d", ft_atoi("-+--+5"));
//}
