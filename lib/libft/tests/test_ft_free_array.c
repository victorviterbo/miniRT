/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_free_array.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:25:07 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/22 16:34:17 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_free_array(void);

bool	test_ft_free_array(void)
{
	void	**test_case_1;
	void	**test_case_2;

	test_case_1 = create_test_array(5);
	if (!test_case_1)
	{
		printf("Memory allocation failed for test case 1\n");
		return (false);
	}
	ft_free_array(test_case_1, 5);
	test_case_2 = NULL;
	ft_free_array(test_case_2, 5);
	for (size_t i = 0; i < 1000; i++)
	{
		void **large_test_case = create_test_array(1000);
		if (!large_test_case)
		{
			printf("Memory allocation failed on large test case in loop\n");
			return (false);
		}
		ft_free_array(large_test_case, 1000);
	}
	return (true);
}
