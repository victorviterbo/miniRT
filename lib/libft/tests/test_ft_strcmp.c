/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:13:19 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/27 14:27:48 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_strcmp(void);

bool	test_ft_strcmp(void)
{
	if (ft_strcmp("This string", "That string") == 0)
	{
		printf("test_ft_strcmp failed on test 1\n");
		return (false);
	}
	if (ft_strcmp("This string", "This string") != 0)
	{
		printf("test_ft_strcmp failed on test 2\n");
		return (false);
	}
	if (ft_strcmp("This string", "This strings") == 0)
	{
		printf("test_ft_strcmp failed on test 3\n");
		return (false);
	}
	if (ft_strcmp("This strings", "This string") == 0)
	{
		printf("test_ft_strcmp failed on test 4\n");
		return (false);
	}
	if (ft_strcmp(NULL, "This string") == 0)
	{
		printf("test_ft_strcmp failed on test 5\n");
		return (false);
	}
	if (ft_strcmp("This string", NULL) == 0)
	{
		printf("test_ft_strcmp failed on test 6\n");
		return (false);
	}
	if (ft_strcmp(NULL, NULL) != 0)
	{
		printf("test_ft_strcmp failed on test 7\n");
		return (false);
	}
	if (ft_strcmp("", "This string") == 0)
	{
		printf("test_ft_strcmp failed on test 8\n");
		return (false);
	}
	if (ft_strcmp("This string", "") == 0)
	{
		printf("test_ft_strcmp failed on test 9\n");
		return (false);
	}
	if (ft_strcmp("", "") != 0)
	{
		printf("test_ft_strcmp failed on test 10\n");
		return (false);
	}
	return (true);
}
