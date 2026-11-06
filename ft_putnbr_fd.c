/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:31:08 by spitte            #+#    #+#             */
/*   Updated: 2026/11/03 17:30:59 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int nb, int fd)
{
	char	digit;

	if (nb == 0)
		write(fd, "0", 1);
	else
	{
		if (nb == -2147483648)
			write(fd, "-2147483648", 11);
		else
		{
			if (nb < 0)
			{
				write (1, "-", 1);
				nb = -1 * nb;
			}
			if (nb > 0)
			{
				if (nb / 10 != 0)
					ft_putnbr_fd(nb / 10, fd);
				digit = nb % 10 + '0';
				write(fd, &digit, 1);
			}
		}
	}
}

//#include <fcntl.h>
//int	main()
//{
//	int fd = open("output.txt", O_CREAT | O_RDWR);
//	//int fd = 1;
//	ft_putnbr_fd(0,fd);
//}
