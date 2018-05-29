#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	int	fd_stdout = dup(1);
	int ret = 0;

	extern int ft_puts(char *s);
	printf("\x1B[32m");
	printf("ret value for \"HELLO\" = %d\n", ft_puts("HELLO"));
	printf("ret value for NULL = %d\n", ft_puts(NULL));
	close(1);
	ret = ft_puts("HELLO");
	dup2(fd_stdout, 1);
	write(1, "Fd closed HELLO is not printed.", 32);
	printf("\x1B[0m");

	printf("\nTest with libc puts.\n\n");

	printf("\x1B[36m");
	printf("ret value for \"HELLO\" = %d\n", puts("HELLO"));
	printf("ret value for NULL = %d\n", puts(NULL));
	close(1);
	printf("ret value for \"HELLO\" with stdout closed: %d\n", puts("HELLO"));
	dup2(fd_stdout, 1);
	printf("\x1B[0m");
	return (0);
}
