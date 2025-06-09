/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin_gnl.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:27:06 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/05 16:02:49 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"


bool	test_ft_strjoin_gnl(void);

bool	test_ft_strjoin_gnl(void)
{
	char	*result;

	char *str1 = strdup("Hello");
	char *str2 = strdup(" World\n");
	result = ft_strjoin_gnl(str1, str2, 0);
	if (result == NULL || strcmp(result, "Hello World\n") != 0)
	{
		printf("test_ft_strjoin_gnl failed on test case 1\n");
		free(result);
		free(str1);
		free(str2);
		return (false);
	}
	free(result);
	free(str1);
	free(str2);
	str1 = strdup("Line 1");
	str2 = strdup("Line 2\nExtra");
	result = ft_strjoin_gnl(str1, str2, 0);
	if (result == NULL || strcmp(result, "Line 1Line 2\n") != 0)
	{
		printf("test_ft_strjoin_gnl failed on test case 2\n");
		free(result);
		free(str1);
		free(str2);
		return (false);
	}
	free(result);
	free(str1);
	free(str2);
	str1 = strdup("");
	str2 = strdup("");
	result = ft_strjoin_gnl(str1, str2, 0);
	if (result == NULL || strcmp(result, "") != 0)
	{
		printf("test_ft_strjoin_gnl failed on test case 3\n");
		free(result);
		free(str1);
		free(str2);
		return (false);
	}
	free(result);
	str1 = strdup("");
	str2 = strdup("Hello\n");
	result = ft_strjoin_gnl(str1, str2, 0);
	if (result == NULL || strcmp(result, "Hello\n") != 0)
	{
		printf("test_ft_strjoin_gnl failed on test case 4\n");
		free(result);
		free(str1);
		free(str2);
		return (false);
	}
	free(result);
	free(str2);
	str1 = strdup("Goodbye");
	str2 = strdup("");
	result = ft_strjoin_gnl(str1, str2, 0);
	if (result == NULL || strcmp(result, "Goodbye") != 0)
	{
		printf("test_ft_strjoin_gnl failed on test case 5\n");
		free(result);
		free(str1);
		free(str2);
		return (false);
	}
	free(result);
	free(str1);
	str1 = strdup("In-place");
	str2 = strdup(" Testing\n");
	result = ft_strjoin_gnl(str1, str2, 1);
	if (result == NULL || strcmp(result, "In-place Testing\n") != 0)
	{
		printf("test_ft_strjoin_gnl failed on test case 6\n");
		free(result);
		return (false);
	}
	free(result);
	str1 = strdup("Test");
	str2 = strdup(" Overflow");
	free(str2);
	result = ft_strjoin_gnl(str1, str2, 0);
	if (result != NULL)
	{
		printf("test_ft_strjoin_gnl failed on test case 7 - expected NULL on allocation failure\n");
		free(result);
	}
	else
	{
		printf("Memory allocation handled correctly in test case 7\n");
	}
	free(str1);

	return (true);
}
