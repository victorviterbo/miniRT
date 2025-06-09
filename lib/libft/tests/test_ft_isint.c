/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:04:40 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/05 16:16:27 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_isint(void);

bool	test_ft_isint(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;

	str1 = strdup("Is this a number ?");
	str2 = strdup("-1234");
	str3 = strdup("+11");
	str4 = strdup("12.4");
	str5 = strdup("\0051234");
	if (ft_isint(str1))
	{
		printf("test_ft_isint failed on test 1\n");
		return (false);
	}
	if (!ft_isint(str2))
	{
		printf("test_ft_isint failed on test 2\n");
		return (false);
	}
	if (!ft_isint(str3))
	{
		printf("test_ft_isint failed on test 3\n");
		return (false);
	}
	if (ft_isint(str4))
	{
		printf("test_ft_isint failed on test 4\n");
		return (false);
	}
	if (ft_isint(NULL))
	{
		printf("test_ft_isint failed on test 5\n");
		return (false);
	}
	if (ft_isint(str5))
	{
		printf("test_ft_isint failed on test 6\n");
		return (false);
	}
	free(str1);
	free(str2);
	free(str3);
	free(str4);
	free(str5);
	return (true);
}
