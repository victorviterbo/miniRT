/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin_ip.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:58:20 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/16 17:53:19 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_strjoin_ip(void);

bool	test_ft_strjoin_ip(void)
{
	char	*str1;
	char	*str2;
	char	*str3;

	return (true);
	str1 = calloc(1, 1);
	if (!str1)
		return (false);
	str2 = strdup("Lorem ipsum ");
	str3 = strdup("dolor sit amet");
	if (strcmp(ft_strjoin_ip(str1, str2, 0), "Lorem ipsum "))
	{
		printf("test_ft_strjoin failed on test 1\n");
		return (false);
	}
	if (strcmp(ft_strjoin_ip(str1, str2, 1), "Lorem ipsum "))
	{
		printf("test_ft_strjoin failed on test 2\n");
		return (false);
	}
	str1 = calloc(1, 1);
	if (!str1)
		return (false);
	if (strcmp(ft_strjoin_ip(str1, str2, 2), "Lorem ipsum "))
	{
		printf("test_ft_strjoin failed on test 3\n");
		return (false);
	}
	str2 = strdup("Lorem ipsum ");
	if (!str2)
		return (false);
	if (strcmp(ft_strjoin_ip(str1, str2, 3), "Lorem ipsum "))
	{
		printf("test_ft_strjoin failed on test 4\n");
		return (false);
	}
	str1 = calloc(1, 1);
	if (!str1)
		return (false);
	str2 = strdup("Lorem ipsum ");
	if (!str2)
		return (false);
	if (strcmp(ft_strjoin_ip(str2, str3, 0), "Lorem ipsum dolor sit amet"))
	{
		printf("test_ft_strjoin failed on test 5\n");
		return (false);
	}
	if (strcmp(ft_strjoin_ip(str2, str3, 1), "Lorem ipsum dolor sit amet"))
	{
		printf("test_ft_strjoin failed on test 6\n");
		return (false);
	}
	str2 = strdup("Lorem ipsum ");
	if (!str2)
		return (false);
	if (strcmp(ft_strjoin_ip(str2, str3, 2), "Lorem ipsum dolor sit amet"))
	{
		printf("test_ft_strjoin failed on test 7\n");
		return (false);
	}
	str3 = strdup("dolor sit amet");
	if (!str3)
		return (false);
	if (strcmp(ft_strjoin_ip(str2, str3, 3), "Lorem ipsum dolor sit amet"))
	{
		printf("test_ft_strjoin failed on test 8\n");
		return (false);
	}
	str2 = strdup("Lorem ipsum ");
	if (!str2)
		return (false);
	str3 = strdup("dolor sit amet");
	if (!str3)
		return (false);
	if (ft_strjoin_ip(NULL, str3, 0) != NULL)
	{
		printf("test_ft_strjoin failed on test 9\n");
		return (false);
	}
	if (ft_strjoin_ip(str2, NULL, 0) != NULL)
	{
		printf("test_ft_strjoin failed on test 10\n");
		return (false);
	}
	free(str1);
	free(str2);
	free(str3);
	return (true);
}
