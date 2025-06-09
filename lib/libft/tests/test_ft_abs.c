/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_abs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:57:24 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/14 22:00:19 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_abs(void);

bool	test_ft_abs(void)
{
	double	test1 = -123.456;
	double	test2 = 0.0;
	double	test3 = 123.456;
	double	test4 = -DBL_MAX;
	double	test5 = DBL_MIN;

	if (ft_abs(test1) - 123.456 > DBL_EPSILON)
	{
		printf("test_ft_abs failed on test 1\n");
		return (false);
	}
	if (ft_abs(test2) > DBL_EPSILON)
	{
		printf("test_ft_abs failed on test 2\n");
		return (false);
	}
	if (ft_abs(test3) - 123.456 > DBL_EPSILON)
	{
		printf("test_ft_abs failed on test 3\n");
		return (false);
	}
	if (ft_abs(test4) - DBL_MAX > DBL_EPSILON)
	{
		printf("test_ft_abs failed on test 4\n");
		return (false);
	}
	if (ft_abs(test5) - DBL_MIN > DBL_EPSILON)
	{
		printf("test_ft_abs failed on test 5\n");
		return (false);
	}
	return (true);
}
