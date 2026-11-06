/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:03:51 by spitte            #+#    #+#             */
/*   Updated: 2026/11/03 17:12:52 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *str, int fd)
{
	int	n;

	n = 0;
	while (str[n] > 0)
	{
		write(fd, &str[n], 1);
		n++;
	}
	write(fd, "\n", 1);
}

//#include <fcntl.h>
//int	main()
//{
//	char a[13] = "Hello world!";
//	int fd = open("output.txt", O_RDWR | O_CREAT);
//	ft_putendl_fd(a,fd);
//	write(fd,"n",1);
//}
