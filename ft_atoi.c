/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:56:04 by spitte            #+#    #+#             */
/*   Updated: 2026/07/25 15:35:44 by spitte           ###   ########.fr       */
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
	while (str[i] == 32 || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '+' || str[i] == '\v' || str[i] == '-')
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

//int	main()
//#include <stdio.h>
//{
//	printf("%d", ft_atoi("100"));
//	printf("\n%d", ft_atoi("90"));
//	printf("\n%d", ft_atoi("5"));
//	//printf("\n%d", ft_atoi("abc"));
//	printf("\n%d", ft_atoi("0100"));
//	printf("\n%d", ft_atoi("-+--+5"));
//}
