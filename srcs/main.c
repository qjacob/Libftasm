#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	int		fd;

	fd = open("mdr.txt", O_RDONLY);
	extern int ft_cat(int fd);

	// printf("OUI\n");
	ft_cat(0);
	// printf("NON\n");
	return (0);
}
