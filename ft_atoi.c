/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:56:04 by spitte            #+#    #+#             */
/*   Updated: 2026/11/07 14:24:25 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	order;
	int	nbstart;
	int	nb;

	i = 0;
	nb = 0;
	order = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			order = order * (-1);
		i++;
	}
	nbstart = i;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (i-- > nbstart)
	{
		nb = nb + (str[i] - '0') * order;
		order = order * 10;
	}
	return (nb);
}

//#include <stdio.h>
//#include <stdlib.h>
//int	main()
//{
//	printf("ft:%d\n", ft_atoi("1"));
//	printf("og:%d\n", atoi("1"));
//	printf("ft:%d\n", ft_atoi("+42"));
//	printf("og:%d\n", atoi("+42"));
//	printf("ft:%d\n", ft_atoi("-10e0"));
//	printf("og:%d\n", atoi("-10e0"));
//	printf("ft:%d\n", ft_atoi("00100e"));
//	printf("og:%d\n", atoi("00100e"));
//	printf("ft:%d\n", ft_atoi("-+--+5"));
//	printf("og:%d\n", atoi("-+--+5"));
//}
