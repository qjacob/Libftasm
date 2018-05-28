#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int	main()
{
	int		fd;

	fd = open("Makefile", O_RDONLY);
	extern void ft_cat(int fd);
	printf("\x1B[32m");
	printf("Cat on Makefile: \n");
	printf("\x1B[0m");
	ft_cat(fd);
	close(fd);
	fd = open("main_test", O_RDONLY);
	ft_cat(fd);
	close(fd);

	printf("\nTest with shell cat.\n\n");

	printf("\x1B[36m");
	printf("Cat system: \n");
	printf("\x1B[0m");
	system("cat Makefile");
	return (0);
}