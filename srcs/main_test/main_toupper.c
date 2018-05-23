#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	int	i = 'z';

	printf("char = %c\n", i);
	extern int ft_toupper(int c);
	printf("ret value = %c\n", (char)ft_toupper(i));

	i = 'Z';
	printf("char = %c\n", i);
	printf("%c\n", (char)ft_toupper(i));
	return (0);
}
