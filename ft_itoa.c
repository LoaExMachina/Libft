/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:33:23 by spitte            #+#    #+#             */
/*   Updated: 2026/11/07 18:49:50 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	findpower(int n)
{
	int		power;

	if (n < 0)
		n = -n;
	power = 0;
	while (n >= 10)
	{
		n = n/10;
		power++;
	}
	return (power);
}

int	power(int nb, int power)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int		neg;
	char	*str;
	int		i;

	i = 0;
	if (n == 0)
		return ((char *)"0");
	if (n == -2147483648)
		return ((char *)"-2147483648");
	neg = (n < 0);
	str = malloc(sizeof(char) * (neg + findpower(n) + 2));
	if (!str)
	{
		free(str);
		return (NULL);
	}
	n = n * (1 - 2 * (n < 0));
	if (neg)
		str[0] = '-';
	while (n > 0)
	{
		str[i + neg] = n / power(10, findpower(n)) + '0';
		n = n % power(10, findpower(n));
		i++;
	}
	str[i + neg] = 0;
	return (str);
}

//#include <stdio.h>
//int main()
//{
//	printf("findpower 1000 : %d \n",findpower(1000));
//	printf("findpower 42 : %d \n",findpower(42));
//	printf("findpower -2147483648 : %d \n",findpower(-2147483648));
//	printf("0: %s\n42: %s\n-42: %s\n2147483647: %s\n",ft_itoa(0),
//		ft_itoa(42),ft_itoa(-42),ft_itoa(2147483647));
//}
