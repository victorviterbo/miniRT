/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strarray_mapi.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:21:58 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/16 17:52:33 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool		test_ft_strarray_mapi(void);
static char	*ft_example_function(const char *s);

bool	test_ft_strarray_mapi(void)
{
	char	**test_case_1;
	char	**result;

	test_case_1 = (char *[]){"first", "second", "third", NULL};
	result = ft_strarray_mapi(test_case_1, ft_example_function);
	if (!result)
	{
		printf("test_ft_strarray_mapi failed on test 1\n");
		return (false);
	}
	if (strcmp(result[0], "First") != 0 || strcmp(result[1], "Second") != 0 || strcmp(result[2], "Third") != 0)
	{
		printf("test_ft_strarray_mapi failed on test 2\n");
		ft_free_array((void **)result, 3);
		return (false);
	}
	ft_free_array((void **)result, 3);
	if (ft_strarray_mapi((char *[]){NULL}, ft_example_function))
	{
		printf("test_ft_strarray_mapi failed on test case 3\n");
		return (false);
	}
	if (ft_strarray_mapi(NULL, ft_example_function))
	{
		printf("test_ft_strarray_mapi failed on test 4\n");
		return (false);
	}
	test_case_1 = (char *[]){"first", "second", "fail", NULL};
	result = ft_strarray_mapi(test_case_1, ft_example_function);
	if (strcmp(result[0], "First") != 0 || strcmp(result[1], "Second") != 0 || strcmp(result[2], "Fail") != 0)
	{
		printf("test_ft_strarray_mapi failed on test 5\n");
		ft_free_array((void **)result, 2);
		return (false);
	}
	ft_free_array((void **)result, ft_arrlen(result));
	return (true);
}

static char	*ft_example_function(const char *s)
{
	char	*result;

	result = malloc(strlen(s) + 1);
	if (!result)
		return (NULL);
	strcpy(result, s);
	result[0] = toupper(result[0]);
	return (result);
}
