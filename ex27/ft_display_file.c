/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cogata <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:42:52 by cogata            #+#    #+#             */
/*   Updated: 2023/07/18 10:42:53 by cogata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	read_arch(char *path)
{
	int		fd;
	char	buffer[4096];
	int		file_size;
	int		close_fd;

	fd = open(path, O_RDWR);
	if (fd != -1)
	{
		file_size = read(fd, buffer, 4096);
		if (file_size > 0)
		{
			buffer[file_size] = '\0';
			ft_putstr(buffer);
		}
		else
			ft_putstr("Error reading file.\n");
		close_fd = close(fd);
		if (close_fd < 0)
			ft_putstr("Error closing file.\n");
	}
	else
		ft_putstr("Error opening file.\n");
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		read_arch(&argv[1][0]);
	}
}
