#include <string.h>
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
	printf("\x1B[32m");
	printf("before str: %s, len: %zu\n", str, len);
	extern void ft_bzero(char *str, size_t len);
	ft_bzero(str, len);
	printf("after first str char: %c,  len: %zu\n", str[0], len);
	printf("after second str char: %c\n", str[1]);
	printf("after third str char: %c\n", str[2]);
	printf("\x1B[0m");

	printf("\nTest with libc bzero.\n\n");
	char	*str2;
	size_t	len2 = 4;

	printf("\x1B[36m");
	str2 = malloc(sizeof(char) * 4);
	str2[0] = 'm';
	str2[1] = 'd';
	str2[2] = 'r';
	str2[3] = '\0';
	printf("before str2: %s, len2: %zu\n", str2, len2);
	bzero(str2, len2);
	printf("after first str2 char: %c,  len2: %zu\n", str2[0], len2);
	printf("after second str2 char: %c\n", str2[1]);
	printf("after third str2 char: %c\n", str2[2]);
	printf("\x1B[0m");
	return (0);
}
