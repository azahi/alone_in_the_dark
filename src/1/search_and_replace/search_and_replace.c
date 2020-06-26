#include <unistd.h>
#include <stddef.h>
#include <stdio.h>

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
	if (argc == 4 && strlen(argv[2]) == 1 && strlen(argv[3]) == 1)
	{
		for (char *s = argv[1]; *s; s++)
		{
			char *r = argv[3];
			for (char *f = argv[2]; *f; f++)
				if (*s == *f)
					*s = *r;
			write(STDOUT_FILENO, s, 1);
		}
	}
	write(STDOUT_FILENO, "\n", 1);
}
