/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstcut.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:07:00 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/16 18:12:19 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_lstcut(void);

bool	test_ft_lstcut(void)
{
	t_list	**list;
	int		i;

	i = 1;
	list = ft_calloc(1, sizeof(t_list *));
	if (!list)
		return (false);
	*list = ft_lstnew_void((void *)ft_strdup("0"));
	if (!*list)
		return (false);
	while (i < 10)
	{
		ft_lstadd_back(list, ft_lstnew_void(ft_itoa(i)));
		i++;
	}
	ft_lstcut(list, free, 3, 7);
	if (ft_lstsize(*list) != 6)
	{
		printf("test_ft_lstcut failed on test 1\n");
		ft_lstclear(list, free);
		return (false);
	}
	ft_lstcut(list, free, 0, 3);
	if (ft_lstsize(*list) != 3)
	{
		printf("test_ft_lstcut failed on test 2\n");
		ft_lstclear(list, free);
		return (false);
	}
	ft_lstcut(list, free, 2, 10);
	if (ft_lstsize(*list) != 2)
	{
		printf("test_ft_lstcut failed on test 3\n");
		ft_lstclear(list, free);
		return (false);
	}
	ft_lstcut(list, free, 5, 3);
	if (ft_lstsize(*list) != 2)
	{
		printf("test_ft_lstcut failed on test 4\n");
		ft_lstclear(list, free);
		return (false);
	}
	ft_lstcut(list, free, 3, 5);
	if (ft_lstsize(*list) != 2)
	{
		printf("test_ft_lstcut failed on test 5\n");
		ft_lstclear(list, free);
		return (false);
	}
	ft_lstcut(list, free, 1, 10);
	if (ft_lstsize(*list) != 1)
	{
		printf("test_ft_lstcut failed on test 6\n");
		ft_lstclear(list, free);
		return (false);
	}
	ft_lstclear(list, free);
	free(list);
	return (true);
}
