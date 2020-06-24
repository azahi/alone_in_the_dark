#include <unistd.h>

int
main()
{
	write(STDOUT_FILENO, "z", 1);
}
