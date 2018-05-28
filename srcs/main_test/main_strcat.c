#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	char	*s1;
	char	*s2;

	s1 = malloc(sizeof(char) * 12);
	s2 = malloc(sizeof(char) * 6);
	s1 = strcpy(s1, "Hello ");
	s2 = strcpy(s2, "World");
	s1[11] = 'x';
	printf("\x1B[32m");
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	extern char *ft_strcat(char *s1, char *s2);
	s1 = ft_strcat(s1, s2);
	printf("s1 = %s\n", s1);
	printf("\x1B[0m");

	printf("\nTest with libc strcat.\n\n");

	char	*s10;
	char	*s20;

	s10 = malloc(sizeof(char) * 12);
	s20 = malloc(sizeof(char) * 6);
	s10 = strcpy(s10, "Hello ");
	s20 = strcpy(s20, "World");
	s10[11] = 'x';
	printf("\x1B[36m");
	printf("s1 = %s\n", s10);
	printf("s2 = %s\n", s20);
	s10 = strcat(s10, s20);
	printf("s1 = %s\n", s10);
	printf("\x1B[0m");
	return (0);
}
