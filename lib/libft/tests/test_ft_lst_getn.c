/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lst_getn.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:31:05 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/16 19:08:55 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_lst_getn(void);

bool	test_ft_lst_getn(void)
{
	t_list	**list;
	int		i;
	t_list	*result;

	i = 1;
	list = ft_calloc(1, sizeof(t_list *));
	*list = ft_lstnew_void((void *)ft_strdup("0"));
	while (i < 10)
	{
		ft_lstadd_back(list, ft_lstnew_void(ft_itoa(i)));
		i++;
	}
	result = ft_lst_getn(list, 5);
	if (!result || ft_strncmp((char *)result->content, "5", 1) != 0)
	{
		printf("test_ft_lst_getn failed on test 1\n");
		ft_lstclear(list, free);
		return (false);
	}
	result = ft_lst_getn(list, 0);
	if (!result || ft_strncmp((char *)result->content, "0", 1) != 0)
	{
		printf("test_ft_lst_getn failed on test 2\n");
		ft_lstclear(list, free);
		return (false);
	}
	result = ft_lst_getn(list, 9);
	if (!result || ft_strncmp((char *)result->content, "9", 1) != 0)
	{
		printf("test_ft_lst_getn failed on test 3\n");
		ft_lstclear(list, free);
		return (false);
	}
	result = ft_lst_getn(list, 10);
	if (result != NULL)
	{
		printf("test_ft_lst_getn failed on test 4\n");
		ft_lstclear(list, free);
		return (false);
	}
	result = ft_lst_getn(list, -1);
	if (result != NULL)
	{
		printf("test_ft_lst_getn failed on test 5\n");
		ft_lstclear(list, free);
		return (false);
	}
	ft_lstclear(list, free);
	free(list);
	return (true);
}
