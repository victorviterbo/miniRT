/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_get_next_line.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:25:35 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/04 15:42:15 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_get_next_line(void);

bool	test_ft_get_next_line(void)
{
	int		fd;
	char	*line;

	fd = open("testfile.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("test_ft_get_next_line failed on test case 1\n\n");
		return (false);
	}
	line = ft_get_next_line(fd);
	if (line == NULL || strcmp(line, "1234567890\n"))
	{
		printf("test_ft_get_next_line failed on test case 2\n");
		free(line);
		close(fd);
		return (false);
	}
	free(line);
	line = ft_get_next_line(fd);
	if (line == NULL || strcmp(line, "abcdefghijk\n"))
	{
		printf("test_ft_get_next_line failed on test case 3\n");
		free(line);
		close(fd);
		return (false);
	}
	free(line);
	line = ft_get_next_line(fd);
	if (line == NULL || strcmp(line, "This is a\n"))
	{
		printf("test_ft_get_next_line failed on test case 4\n");
		free(line);
		close(fd);
		return (false);
	}
	free(line);
	close(fd);
	line = ft_get_next_line(-1);
	if (line)
	{
		printf("test_ft_get_next_line failed on test case 6\n");
		free(line);
		return (false);
	}
	fd = open("testfile.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("test_ft_get_next_line failed on test case 7\n");
		return (false);
	}
	while ((line = ft_get_next_line(fd)) != NULL)
	{
		free(line);
	}
	close(fd);
	return (true);
}
