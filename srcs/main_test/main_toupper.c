#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	int	i = 122;

	extern int ft_toupper(int c);
	printf("ret value = %c\n", (char)ft_toupper(i));
	return (0);
}
