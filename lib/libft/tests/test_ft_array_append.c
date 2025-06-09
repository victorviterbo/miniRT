/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_array_append.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 12:38:17 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/17 15:37:18 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_array_append(void);

bool	test_ft_array_append(void)
{
	char	**arr;

	arr = ft_calloc(1, sizeof(char *));
	if (!arr)
		return (false);
	arr = ft_array_append(arr, "first line", true);
	if (strcmp(arr[0], "first line"))
	{
		printf("test_ft_isint failed on test 1\n");
		return (false);
	}
	arr = ft_array_append(arr, "second line", false);
	if (strcmp(arr[1], "second line"))
	{
		printf("test_ft_isint failed on test 2\n");
		return (false);
	}
	arr = ft_array_append(arr, "new first line", true);
	if (strcmp(arr[0], "new first line"))
	{
		printf("test_ft_isint failed on test 3\n");
		return (false);
	}
	arr = ft_array_append(arr, "new last line", false);
	if (strcmp(arr[3], "new last line"))
	{
		printf("test_ft_isint failed on test 4\n");
		return (false);
	}
	free(arr);
	return (true);
}

