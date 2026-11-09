/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:33:23 by spitte            #+#    #+#             */
/*   Updated: 2026/11/09 14:02:12 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	findpower(int n)
{
	int		power;

	if (n < 0)
		n = -n;
	power = 0;
	while (n >= 10)
	{
		n = n / 10;
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

char	*exceptions(int n)
{
	char	*str;

	if (n == 0)
	{
		str = malloc (sizeof(char) * 2);
		ft_strlcpy(str, "0", 2);
		return (str);
	}
	if (n == -2147483648)
	{
		str = malloc (sizeof(char) * 12);
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	else
		return (NULL);
}

char	*cleanup(char *str)
{
	free(str);
	return (NULL);
}

char	*ft_itoa(int n)
{
	int		neg;
	char	*str;
	int		i;
	int		pow;

	if (n == 0 || n == -2147483648)
		return (exceptions(n));
	i = 0;
	neg = (n < 0);
	pow = findpower(n);
	str = malloc(sizeof(char) * (neg + findpower(n) + 2));
	if (!str)
		return (cleanup(str));
	n = n * (1 - 2 * (n < 0));
	if (neg)
		str[0] = '-';
	while (i < pow + 1)
	{
		str[i + neg] = n / power(10, pow - i) + '0';
		n = n % power(10, pow - i);
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
//	printf("1000 : %s \n", ft_itoa(1000));
//	printf("1001 : %s \n", ft_itoa(1001));
//}
