/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_ft_atof.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:44:07 by vviterbo          #+#    #+#             */
/*   Updated: 2024/12/04 17:49:09 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_atof(void);

bool	test_ft_atof(void)
{
	float	result;

	result = ft_atof("123.456");
	if (result - 123.456f > FLT_EPSILON)
	{
		printf("test_ft_atof failed on test 1\n");
		return (false);
	}
	result = ft_atof("0.001");
	if (result - 0.001f > FLT_EPSILON)
	{
		printf("test_ft_atof failed on test 2\n");
		return (false);
	}
	result = ft_atof("456");
	if (result - 456.0f > FLT_EPSILON)
	{
		printf("test_ft_atof failed on test 3\n");
		return (false);
	}
	result = ft_atof("-123.456");
	if (result - -123.456f > FLT_EPSILON)
	{
		printf("test_ft_atof failed on test 4\n");
		return (false);
	}
	result = ft_atof("0");
	if (result - 0.0f > FLT_EPSILON)
	{
		printf("test_ft_atof failed on test 5\n");
		return (false);
	}
	result = ft_atof("123,456");
	if (result - 123.456f > FLT_EPSILON)
	{
		printf("test_ft_atof failed on test 6\n");
		return (false);
	}
	result = ft_atof("456,789");
	if (result - 456.789f > FLT_EPSILON)
	{
		printf("test_ft_atof failed on test 7\n");
		return (false);
	}
	result = ft_atof("0.00123");
	if (result - 0.00123f > FLT_EPSILON)
	{
		printf("test_ft_atof failed on test 8\n");
		return (false);
	}
	result = ft_atof("-0.00456");
	if (result + 0.00456f > FLT_EPSILON)
	{
		printf("test_ft_atof failed on test 9\n");
		return (false);
	}
	result = ft_atof("invalid123");
	if (result - 0.0f > FLT_EPSILON)
	{
		printf("test_ft_atof failed on test 10\n");
		return (false);
	}
	return (true);
}
