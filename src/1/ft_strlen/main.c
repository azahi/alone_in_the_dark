#include <stdio.h>
#include <string.h>

int ft_strlen(char *);

int
main(int argc, char *argv[])
{
	(void)argc;
	char *s = argv[1];
	printf("\"%s\" = %ld / %d\n", s, strlen(s), ft_strlen(s));
}
