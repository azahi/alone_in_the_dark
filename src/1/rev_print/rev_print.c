#include <stddef.h>
#include <unistd.h>

size_t
strlen(const char *s)
{
	const char *st = s;
	for (; *s; s++);
	return (s - st);
}

int
main(int argc, char *argv[])
{
	if (argc == 2)
	{
		const char *s = argv[1];
		for (size_t i = strlen(s); i; i--)
			write(STDOUT_FILENO, &s[i], 1);
	}
	write(STDOUT_FILENO, "\n", 1);
}
