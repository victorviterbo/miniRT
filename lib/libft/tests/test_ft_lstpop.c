/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstpop.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:07:00 by vviterbo          #+#    #+#             */
/*   Updated: 2025/02/21 13:32:34 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_lstpop(void);

bool	test_ft_lstpop(void)
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
	ft_lstpop(list, (*list)->next->next, free);
	if (ft_lstsize(*list) != 9)
	{
		printf("test_ft_lstcut failed on test 1\n");
		ft_lstclear(list, free);
		return (false);
	}
	if (ft_strcmp((*list)->next->next->content, "3"))
	{
		printf("test_ft_lstcut failed on test 2\n");
		ft_lstclear(list, free);
		return (false);
	}
	ft_lstpop(list, (*list), free);
	if (ft_lstsize(*list) != 8)
	{
		printf("test_ft_lstcut failed on test 3\n");
		ft_lstclear(list, free);
		return (false);
	}
	if (ft_strcmp((*list)->content, "1"))
	{
		printf("test_ft_lstcut failed on test 4\n");
		ft_lstclear(list, free);
		return (false);
	}
	ft_lstpop(list, ft_lstlast(*list), free);
	if (ft_lstsize(*list) != 7)
	{
		printf("test_ft_lstcut failed on test 5\n");
		ft_lstclear(list, free);
		return (false);
	}
	if (ft_strcmp(ft_lstlast(*list)->content, "8"))
	{
		printf("test_ft_lstcut failed on test 6\n");
		ft_lstclear(list, free);
		return (false);
	}
	ft_lstpop(list, NULL, free);
	if (ft_lstsize(*list) != 7)
	{
		printf("test_ft_lstcut failed on test 7\n");
		ft_lstclear(list, free);
		return (false);
	}
	while (*list)
		ft_lstpop(list, *list, free);
	ft_lstclear(list, free);
	free(list);
	return (true);
}
