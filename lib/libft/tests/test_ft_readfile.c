/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_readfile.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 10:06:43 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/16 17:54:16 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_readfile(void)
{
	int		file1;
	int		file2;
	int		file3;
	char	*filecontent;

	file1 = open("testfile1.txt", O_RDONLY);
	filecontent = ft_readfile(file1);
	if (strcmp(filecontent, "Lorem ipsum dolor sit amet, consectetur adip\n\nNulla leo dolor, port\nNullam vulputate scelerisque nulla ac cursus. "))
	{
		printf("coucou\n");
		printf(">%s<\n", filecontent);
		printf("test_ft_readfile failed on test 1\n");
		return (false);
	}
	free(filecontent);
	file2 = open("testfile2.txt", O_RDONLY);
	filecontent = ft_readfile(file2);
    if (strcmp(filecontent, ""))
	{
		printf("test_ft_readfile failed on test 2\n");
		return (false);
	}
	free(filecontent);
	file3 = open("testfile3.txt", O_RDONLY);
	filecontent = ft_readfile(file3);
	if (strcmp(filecontent, "canyoureadthis?"))
	{
		printf("test_ft_readfile failed on test 3\n");
		return (false);
	}
	free(filecontent);
	file3 = open("testfile4.txt", O_RDONLY);
	filecontent = ft_readfile(file3);
	if (strcmp(filecontent, "lalala\ncoucou\nbonjour\n\n\nau revoir"))
	{
		printf("test_ft_readfile failed on test 4\n");
		return (false);
	}
	free(filecontent);
    return (true);
}
