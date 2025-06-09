/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:13:30 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/05 14:19:37 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_max(void);

bool	test_ft_max(void)
{
	if (ft_max(12, 134) != 134)
	{
		printf("test_ft_max failed on test 1\n");
		return (false);
	}
	if (ft_max(-12, 134) != 134)
	{
		printf("test_ft_max failed on test 2\n");
		return (false);
	}
	if (ft_max(12, -134) != 12)
	{
		printf("test_ft_max failed on test 3\n");
		return (false);
	}
	if (ft_max(-12, -134) != -12)
	{
		printf("test_ft_max failed on test 4\n");
		return (false);
	}
	if (ft_max('a', 'b') != 'b')
	{
		printf("test_ft_max failed on test 5\n");
		return (false);
	}
	return (true);
}
