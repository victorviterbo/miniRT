/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_arrlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:24:36 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/07 20:39:44 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool	test_ft_arrlen(void);

bool	test_ft_arrlen(void)
{
	char	**test_case_1;
	char	**test_case_2;
	char	**test_case_3;
	char	**test_case_4;
	char	**test_case_5;
	char	**test_case_6;

	test_case_1 = (char *[]){"Hello", "World", "Test", NULL};
	if (ft_arrlen(test_case_1) != 3)
	{
		printf("test_ft_arrlen failed on test case 1\n");
		return (false);
	}
	test_case_2 = (char *[]){"Single", NULL};
	if (ft_arrlen(test_case_2) != 1)
	{
		printf("test_ft_arrlen failed on test case 2\n");
		return (false);
	}
	test_case_3 = (char *[]) {NULL};
	if (ft_arrlen(test_case_3) != 0)
	{
		printf("test_ft_arrlen failed on test case 3\n");
		return (false);
	}
	test_case_4 = NULL;
	if (ft_arrlen(test_case_4) != 0)
	{
		printf("test_ft_arrlen failed on test case 4\n");
		return (false);
	}
	test_case_5 = malloc(10001 * sizeof(char *));
	if (!test_case_5)
	{
		perror("Memory allocation failed for test case 5");
		return (false);
	}
	for (size_t i = 0; i < 10000; i++)
	{
		test_case_5[i] = strdup("Test");
		if (!test_case_5[i])
		{
			perror("Memory allocation failed for test case 5 string");
			return (false);
		}
	}
	test_case_5[10000] = NULL;
	if (ft_arrlen(test_case_5) != 10000)
	{
		printf("test_ft_arrlen failed on test case 5\n");
		return (false);
	}
	for (size_t i = 0; i < 10000; i++)
		free(test_case_5[i]);
	free(test_case_5);
	test_case_6 = (char *[]){"", "", NULL};
	if (ft_arrlen(test_case_6) != 2)
	{
		printf("test_ft_arrlen failed on test case 6\n");
		return (false);
	}

	return (true);
}

