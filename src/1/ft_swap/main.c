#include <stdlib.h>
#include <stdio.h>

void ft_swap(int *, int *);

int
main(int argc, char *argv[])
{
	(void)argc;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	printf("a = \"%d\", b = \"%d\"\n", a, b);
	ft_swap(&a, &b);
	printf("a = \"%d\", b = \"%d\"\n", a, b);
}
