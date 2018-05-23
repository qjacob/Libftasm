#include <stdlib.h>
#include <stdio.h>

int		main()
{
	char	*str;
	size_t	len = 4;

	str = malloc(sizeof(char) * 4);
	str[0] = 'm';
	str[1] = 'd';
	str[2] = 'r';
	str[3] = '\0';
	printf("before str: %s, len: %zu\n", str, len);
	extern void ft_bzero(char *str, size_t len);
	ft_bzero(str, len);
	printf("after first str char: %c,  len: %zu\n", str[0], len);
	printf("after second str char: %c\n", str[1]);
	printf("after third str char: %c\n", str[2]);
	return (0);
}
