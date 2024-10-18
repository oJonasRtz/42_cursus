#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int		fd;
	char	*str;

	if (argc > 1)
	{
		fd = open(argv[1], O_RDONLY);
		str = get_next_line(fd);
		printf("%s", str);
		close(fd);
	}
	else
		printf("Type a file to open.\n");
	return (0);
}
