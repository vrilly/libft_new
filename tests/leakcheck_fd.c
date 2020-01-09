/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   leakcheck_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <tjans@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/09 15:58:03 by tjans         #+#    #+#                 */
/*   Updated: 2020/01/09 16:02:56 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "libft.h"

int main(int argc, char *argv[])
{
	t_fdstream	*stream;
	char		*line;
	int			ret;

	stream = fd_open("test.txt", O_RDONLY);
	ret = 1;
	while (ret == 1)
	{
		ret = fd_readline(stream, &line);
		printf("[%d] %s\n", ret, line);
		if (line && ret != -1)
			free(line);
	}
	fd_close(stream);
	while (1){}
	return 0;
}
