/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:01:28 by vviterbo          #+#    #+#             */
/*   Updated: 2025/02/20 19:09:42 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_range(void);

bool	test_ft_range(void)
{
	int	*range;

	range = ft_range(10, 0);
	if (range)
	{
		printf("test_ft_range failed on test 1\n");
		return (false);
	}
	range = ft_range(-1, INT_MAX);
	if (range)
	{
		printf("test_ft_range failed on test 2\n");
		return (false);
	}
	range = ft_range(0, 10);
	if (range[0] != 0 && range[9] != 9)
	{
		printf("test_ft_range failed on test 3\n");
		return (false);
	}
	free(range);
	range = ft_range(1, 1);
	if (range[0])
	{
		printf("test_ft_range failed on test 4\n");
		return (false);
	}
	free(range);
	return (true);
}
