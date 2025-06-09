/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:13:27 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/05 16:17:06 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_min(void);

bool	test_ft_min(void)
{
	if (ft_min(12, 134) != 12)
	{
		printf("test_ft_min failed on test 1\n");
		return (false);
	}
	if (ft_min(-12, 134) != -12)
	{
		printf("test_ft_min failed on test 2\n");
		return (false);
	}
	if (ft_min(12, -134) != -134)
	{
		printf("test_ft_min failed on test 3\n");
		return (false);
	}
	if (ft_min(-12, -134) != -134)
	{
		printf("test_ft_min failed on test 4\n");
		return (false);
	}
	if (ft_min('a', 'b') != 'a')
	{
		printf("test_ft_min failed on test 5\n");
		return (false);
	}
	return (true);
}
