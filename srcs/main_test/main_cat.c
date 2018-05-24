#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int	main()
{
	int		fd;

	fd = open("Makefile", O_RDONLY);
	extern void ft_cat(int fd);
	ft_cat(fd);
	close(fd);
	fd = open("main_test", O_RDONLY);
	ft_cat(fd);
	close(fd);
	return (0);
}