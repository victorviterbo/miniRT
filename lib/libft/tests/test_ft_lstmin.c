/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstmin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:20:09 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/16 18:09:38 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_lstmin(void)
{
	t_list	**lst;
	int		int_array[5] = {1, 2, 3, 18, -5};
	int		**int_ptr;
	float	float_array[6] = {1.234, 3.1415, 2.78, -123.456, 0.000000001, 3.16};
	float	**float_ptr;

	int_ptr = malloc(sizeof(int *) * 5);
	if (!int_ptr)
		return (false);
	for (size_t i = 0; i < 5; i++)
		int_ptr[i] = &int_array[i];
	lst = ft_arr2lst((void **)int_ptr, ft_copy_int, 5);
	free(int_ptr);
	if ((int)ft_lstmin(lst, INT) != -5)
	{
		printf("test_ft_lstmin failed on test 1\n");
		return (false);
	}
    if (ft_lstmin(NULL, INT))
	{
		printf("test_ft_lstmin failed on test 2\n");
		return (false);
	}
	ft_lstclear(lst, free);
	free(lst);
	float_ptr = malloc(sizeof(float *) * 6);
	if (!float_ptr)
		return (false);
	for (size_t i = 0; i < 6; i++)
		float_ptr[i] = &float_array[i];
	lst = ft_arr2lst((void **)float_ptr, ft_copy_float, 6);
	free(float_ptr);
	if (ft_lstmin(lst, FLOAT) + 123.456 < -0.01 || ft_lstmin(lst, FLOAT) + 123.456 > 0.01)
	{
		printf("test_ft_lstmin failed on test 3\n");
		return (false);
	}
	if (ft_lstmin(NULL, FLOAT))
	{
		printf("test_ft_lstmin failed on test 4\n");
		return (false);
	}
	ft_lstclear(lst, free);
	free(lst);
    return (true);
}
