/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_count_strocc.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:14:12 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/16 19:49:18 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_count_strocc(void);

bool	test_ft_count_strocc(void)
{
	if (ft_count_strocc("", "", false) != 1)
	{
		printf("test_ft_count_strocc failed on test 1\n");
		return (false);
	}
	if (ft_count_strocc("Lorem ipsum dolor sit amet, consectetur adipiscing elit", "", false) != 1)
	{
		printf("test_ft_count_strocc failed on test 2\n");
		return (false);
	}
	if (ft_count_strocc("", "", true) != 1)
	{
		printf("test_ft_count_strocc failed on test 3\n");
		return (false);
	}
	if (ft_count_strocc("Lorem ipsum dolor sit amet, consectetur adipiscing elit", "", true) != 1)
	{
		printf("test_ft_count_strocc failed on test 4\n");
		return (false);
	}
	if (ft_count_strocc("Lorem ipsum doLor sit amet, consectetur adipiscing elit", "Lorem ipsum doLor sit amet, consectetur adipiscing elit", false) != 1)
	{
		printf("test_ft_count_strocc failed on test 5\n");
		return (false);
	}
	if (ft_count_strocc("Lorem ipsum doLor sit amet, consectetur adipiscing elit", "Lorem ipsum doLor sit amet, consectetur adipiscing elit", true) != 1)
	{
		printf("test_ft_count_strocc failed on test 6\n");
		return (false);
	}
	if (ft_count_strocc("", "L", false) != 0)
	{
		printf("test_ft_count_strocc failed on test 7\n");
		return (false);
	}
	if (ft_count_strocc("", "L", true) != 0)
	{
		printf("test_ft_count_strocc failed on test 8\n");
		return (false);
	}
	if (ft_count_strocc("Lorem ipsum dolor sit amet, consectetur adipiscing elit", "Lor", false) != 1)
	{
		printf("test_ft_count_strocc failed on test 9\n");
		return (false);
	}
	if (ft_count_strocc("Lorem ipsum dolor sit amet, consectetur adipiscing elit", "Lor", true) != 1)
	{
		printf("test_ft_count_strocc failed on test 10\n");
		return (false);
	}
	if (ft_count_strocc("Lorem ipsum doLor sit amet, consectetur adipiscing elit", "Lor", false) != 2)
	{
		printf("test_ft_count_strocc failed on test 11\n");
		return (false);
	}
	if (ft_count_strocc("Lorem ipsum doLor sit amet, consectetur adipiscing elit", "elit", false) != 1)
	{
		printf("test_ft_count_strocc failed on test 12\n");
		return (false);
	}
	if (ft_count_strocc("Lorem ipsum doLor sit amet, consectetur adipiscing elit", "elit", true) != 1)
	{
		printf("test_ft_count_strocc failed on test 13\n");
		return (false);
	}
	if (ft_count_strocc("LoremLorem ipsum doLor sit amet, consectetur adipiscing elit", "Lorem", false) != 2)
	{
		printf("test_ft_count_strocc failed on test 14\n");
		return (false);
	}
	if (ft_count_strocc("LoremLorem ipsum doLor sit amet, consectetur adipiscing elit", "Lorem", true) != 2)
	{
		printf("test_ft_count_strocc failed on test 15\n");
		return (false);
	}
	if (ft_count_strocc("LoremLorem ipslalalaonsectetur adipiscing elit", "lala", false) != 2)
	{
		printf("test_ft_count_strocc failed on test 16\n");
		return (false);
	}
	if (ft_count_strocc("LoremLorem ipslalalaonsectetur adipiscing elit", "lala", true) != 1)
	{
		printf("test_ft_count_strocc failed on test 17\n");
		return (false);
	}
	return (true);
}
