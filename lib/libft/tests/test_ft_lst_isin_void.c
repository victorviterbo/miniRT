/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lst_isin_void.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:21:06 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/16 19:07:43 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_lst_isin_void(void);

bool	test_ft_lst_isin_void(void)
{
	t_list	**lst;
	char	**str_ptr;
	int		int_array[3] = {1, 2, 3};
	int		**int_ptr;
	float	float_array[3] = {1.234, 3.1415, 2.78};
	float	**float_ptr;
	bool	bool_array[3] = {false, true, true};
	bool	**bool_ptr;
	void	*elem_str;
	void	*elem_int;
	void	*elem_float;
	void	*elem_bool;

	elem_str = strdup("dolor");
	str_ptr = ft_split("lorem ipsum dolor sit amet", ' ');
	lst = ft_arr2lst((void **)str_ptr, ft_dummy_2, 5);
	free(str_ptr);
	if (!ft_lst_isin_void(lst, elem_str, -1))
	{
		printf("test_ft_lst_isin_void failed on test 1\n");
		return (false);
	}
	free(elem_str);
	elem_str = strdup("LALALALA");
	if (!elem_str)
		return (false);
	if (ft_lst_isin_void(lst, elem_str, -1))
	{
		printf("test_ft_lst_isin_void failed on test 2\n");
		return (false);
	}
	if (ft_lst_isin_void(lst, NULL, -1))
	{
		printf("test_ft_lst_isin_void failed on test 3\n");
		return (false);
	}
	if (ft_lst_isin_void(NULL, elem_str, -1))
	{
		printf("test_ft_lst_isin_void failed on test 4\n");
		return (false);
	}
	free(elem_str);
	if (ft_lst_isin_void(NULL, NULL, -1))
	{
		printf("test_ft_lst_isin_void failed on test 5\n");
		return (false);
	}
	int_ptr = malloc(sizeof(int *) * 3);
	if (!int_ptr)
		return (false);
	for (size_t i = 0; i < 3; i++)
		int_ptr[i] = &int_array[i];
	ft_lstclear(lst, free);
	free(lst);
	elem_int = calloc(1, sizeof(int));
	if (!elem_int)
		return (false);
	*(int *)elem_int = 2;
	lst = ft_arr2lst((void **)int_ptr, ft_copy_int, 3);
	free(int_ptr);
	if (!ft_lst_isin_void(lst, elem_int, sizeof(int)))
	{
		printf("test_ft_lst_isin_void failed on test 6\n");
		return (false);
	}
	*(int *)elem_int = 314;
	if (ft_lst_isin_void(lst, elem_int, sizeof(int)))
	{
		printf("test_ft_lst_isin_void failed on test 7\n");
		return (false);
	}
	if (ft_lst_isin_void(lst, NULL, sizeof(int)))
	{
		printf("test_ft_lst_isin_void failed on test 8\n");
		return (false);
	}
	free(elem_int);
	ft_lstclear(lst, free);
	free(lst);
	float_ptr = malloc(3 * sizeof(float *));
	if (!float_ptr)
		return (false);
	for (size_t i = 0; i < 3; i++)
		float_ptr[i] = &float_array[i];
	elem_float = calloc(1, sizeof(float *));
	if (!elem_float)
		return (false);
	*(float *)elem_float = 3.1415;
	lst = ft_arr2lst((void **)float_ptr, ft_copy_float, 3);
	free(float_ptr);
	if (!ft_lst_isin_void(lst, elem_float, sizeof(float)))
	{
		printf("test_ft_lst_isin_void failed on test 9\n");
		return (false);
	}
	*(float *)elem_float = 1234;
	if (ft_lst_isin_void(lst, elem_float, sizeof(float *)))
	{
		printf("test_ft_lst_isin_void failed on test 10\n");
		return (false);
	}
	if (ft_lst_isin_void(lst, NULL, sizeof(float)) != NULL)
	{
		printf("test_ft_lst_isin_void failed on test 11\n");
		return (false);
	}
	free(elem_float);
	ft_lstclear(lst, free);
	free(lst);
	bool_ptr = malloc(sizeof(bool *) * 3);
	if (!bool_ptr)
		return (false);
	for (size_t i = 0; i < 3; i++)
	{
		bool_ptr[i] = &bool_array[i];
	}
	elem_bool = calloc(1, sizeof(bool));
	if (!elem_bool)
		return (false);
	*(bool *)elem_bool = false;
	lst = ft_arr2lst((void **)bool_ptr, ft_copy_bool, 3);
	free(bool_ptr);
	if (!ft_lst_isin_void(lst, elem_bool, sizeof(bool)))
	{
		printf("test_ft_lst_isin_void failed on test 12\n");
		return (false);
	}
	*(bool *)((*lst)->content) = true;
	if (ft_lst_isin_void(lst, elem_bool, sizeof(bool)))
	{
		printf("test_ft_lst_isin_void failed on test 13\n");
		return (false);
	}
	if (ft_lst_isin_void(lst, NULL, sizeof(bool)) != NULL)
	{
		printf("test_ft_lst_isin_void failed on test 14\n");
		return (false);
	}
	free(elem_bool);
	ft_lstclear(lst, free);
	free(lst);
	return (true);
}
