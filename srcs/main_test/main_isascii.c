#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	int	i = 122;

	extern int ft_isascii(int c);
	printf("ret value = %d\n", ft_isascii(i));
	return (0);
}
