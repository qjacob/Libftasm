#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	extern int ft_puts(char *s);
	printf("ret value for \"HELLO\" = %d\n", ft_puts("HELLO"));
	return (0);
}
