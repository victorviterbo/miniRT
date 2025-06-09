/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_replace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:35:02 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/17 21:03:47 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_str_replace(void);

bool	test_ft_str_replace(void)
{
	char	*str;
	
	str = ft_str_replace("Replace this with that in this string", "this", "that");
	if (strcmp(str, "Replace that with that in that string"))
	{
		printf("test_ft_str_replace failed on test 1\n");
		return (false);
	}
	free(str);
	str = ft_str_replace("Replace this with that in this string", "Replace", "");
	if (strcmp(str, " this with that in this string"))
	{
		printf("test_ft_str_replace failed on test 2\n");
		return (false);
	}
	free(str);
	str = ft_str_replace("Replace this with that in this string", "", "dummy");
	if (strcmp(str, "Replace this with that in this string"))
	{
		printf("test_ft_str_replace failed on test 3\n");
		return (false);
	}
	free(str);
	str = ft_str_replace("Replace this with that in this string", "", "");
	if (strcmp(str, "Replace this with that in this string"))
	{
		printf("test_ft_str_replace failed on test 4\n");
		return (false);
	}
	free(str);
	str = ft_str_replace("Replace this with with with that in this string", "with ", "without ");
	if (strcmp(str, "Replace this without without without that in this string"))
	{
		printf("test_ft_str_replace failed on test 5\n");
		return (false);
	}
	free(str);
	str = ft_str_replace("Replace lalala in this string", "lala", "lili");
	if (strcmp(str, "Replace lilila in this string"))
	{
		printf("test_ft_str_replace failed on test 6\n");
		return (false);
	}
	free(str);
	str = ft_str_replace("Replace this string", "Replace this string", "With that string");
	if (strcmp(str, "With that string"))
	{
		printf("test_ft_str_replace failed on test 7\n");
		return (false);
	}
	free(str);
	str = ft_str_replace("And now special chars \n for instance ?", "\n", "\\n");
	if (strcmp(str, "And now special chars \\n for instance ?"))
	{
		printf("test_ft_str_replace failed on test 8\n");
		return (false);
	}
	free(str);
	str = ft_str_replace("", "lala", "lili");
	if (strcmp(str, ""))
	{
		printf("test_ft_str_replace failed on test 9\n");
		return (false);
	}
	free(str);
	return (true);
}
