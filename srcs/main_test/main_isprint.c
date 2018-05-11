#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	int	i = 32;

	extern int ft_isprint(int c);
	printf("ret value = %d\n", ft_isprint(i));
	return (0);
}
