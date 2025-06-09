/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:12:30 by vviterbo          #+#    #+#             */
/*   Updated: 2025/02/21 13:06:43 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "tests.h"

t_list	**ft_arr2lst(void **arr, void *(*f) (void *), size_t size);
void	*ft_dummy_2(void *ptr);
void	*ft_copy_int(void *ptr);
void	*ft_copy_float(void *ptr);
void	*ft_copy_bool(void *ptr);

int	main(int argc, char *argv[])
{
	bool	do_all;
	char	**tmp;
	t_list	**to_test;

	do_all = true;
	to_test = NULL;
	if (argc != 1)
	{
		do_all = false;
		if (ft_strchr(argv[1], ' '))
		{
			tmp = ft_split(argv[1], ' ');
			to_test = ft_arr2lst((void **)tmp, (void *)ft_strdup, ft_arrlen(tmp));	
			ft_free_array((void **)tmp, ft_arrlen(tmp));
		}
		else
			to_test = ft_arr2lst((void **)&(argv[1]), (void *)ft_strdup, argc - 1);
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_strjoin_ip", -1))
	{
		if (!test_ft_strjoin_ip())
			exit(EXIT_FAILURE);
		else
			printf("ft_strjoin_ip OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_isint", -1))
	{
		if (!test_ft_isint())
			exit(EXIT_FAILURE);
		else
			printf("ft_isint OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_min", -1))
	{
		if (!test_ft_min())
			exit(EXIT_FAILURE);
		else
			printf("ft_min OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_max", -1))
	{
		if (!test_ft_max())
			exit(EXIT_FAILURE);
		else
			printf("ft_max OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_lst_isin_void", -1))
	{
		if (!test_ft_lst_isin_void())
			exit(EXIT_FAILURE);
		else
			printf("ft_lst_isin_void OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_lstmax", -1))
	{
		if (!test_ft_lstmax())
			exit(EXIT_FAILURE);
		else
			printf("ft_lstmax OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_lstmin", -1))
	{
		if (!test_ft_lstmin())
			exit(EXIT_FAILURE);
		else
			printf("ft_lstmin OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_strarray_mapi", -1))
	{
		if (!test_ft_strarray_mapi())
			exit(EXIT_FAILURE);
		else
			printf("ft_strarray_mapi OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_arrlen", -1))
	{
		if (!test_ft_arrlen())
			exit(EXIT_FAILURE);
		else
			printf("ft_arrlen OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_free_array", -1))
	{
		if (!test_ft_free_array())
			exit(EXIT_FAILURE);
		else
			printf("ft_free_array OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_get_next_line", -1))
	{
		if (!test_ft_get_next_line())
			exit(EXIT_FAILURE);
		else
			printf("ft_get_next_line OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_strjoin_gnl", -1))
	{
		if (!test_ft_strjoin_ip())
			exit(EXIT_FAILURE);
		else
			printf("ft_strjoin_gnl OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_lstcut", -1))
	{
		if (!test_ft_lstcut())
			exit(EXIT_FAILURE);
		else
			printf("ft_lstcut OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_lst_getn", -1))
	{
		if (!test_ft_lst_getn())
			exit(EXIT_FAILURE);
		else
			printf("ft_lst_getn OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_abs", -1))
	{
		if (!test_ft_abs())
			exit(EXIT_FAILURE);
		else
			printf("ft_abs OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_atof", -1))
	{
		if (!test_ft_atof())
			exit(EXIT_FAILURE);
		else
			printf("ft_atof OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_coalesce_char", -1))
	{
		if (!test_ft_coalesce_char())
			exit(EXIT_FAILURE);
		else
			printf("ft_coalesce_char OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_readfile", -1))
	{
		if (!test_ft_readfile())
			exit(EXIT_FAILURE);
		else
			printf("ft_readfile OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_array_append", -1))
	{
		if (!test_ft_array_append())
			exit(EXIT_FAILURE);
		else
			printf("ft_array_append OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_count_strocc", -1))
	{
		if (!test_ft_count_strocc())
			exit(EXIT_FAILURE);
		else
			printf("ft_count_strocc OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_str_replace", -1))
	{
		if (!test_ft_str_replace())
			exit(EXIT_FAILURE);
		else
			printf("ft_str_replace OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_str_replace", -1))
	{
		if (!test_ft_strcmp())
			exit(EXIT_FAILURE);
		else
			printf("ft_strcmp OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_tree", -1))
	{
		if (!test_ft_tree())
			exit(EXIT_FAILURE);
		else
			printf("ft_tree OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_range", -1))
	{
		if (!test_ft_range())
			exit(EXIT_FAILURE);
		else
			printf("ft_range OK !\n");
	}
	if (do_all || ft_lst_isin_void(to_test, "ft_lstpop", -1))
	{
		if (!test_ft_lstpop())
			exit(EXIT_FAILURE);
		else
			printf("ft_lstpop OK !\n");
	}
	if (to_test)
	{
		ft_lstclear(to_test, free);
		free(to_test);
	}
	ft_printf("Libft2.0 passed all tests !\n");
	exit (EXIT_SUCCESS);
}

t_list	**ft_arr2lst(void **arr, void *(*f) (void *), size_t size)
{
	t_list	**head;
	t_list	*current;
	size_t	i;
	void	*content;

	if (!arr)
		return (NULL);
	i = 1;
	head = ft_calloc(size, sizeof(t_list *));
	if (!head)
		return (NULL);
	content = f(*arr);
	if (!content)
		return (NULL);
	*head = ft_lstnew_void(content);
	if (!*head)
		return (free(head), free(content), NULL);
	current = *head;
	while (i < size)
	{
		content = f(*(arr + i));
		if (!content)
			return (ft_lstclear(head, free), NULL);
		current->next = ft_lstnew_void(content);
		if (!current->next)
			return (free(content), ft_lstclear(head, free), NULL);
		current = current->next;
		i++;
	}
	return (head);
}

void	*ft_dummy_2(void *ptr)
{
	return (ptr);
}

void	*ft_copy_int(void *ptr)
{
	void	*newptr;

	if (!ptr)
		return (NULL);
	newptr = ft_calloc(1, sizeof(int));
	if (!newptr)
		return (NULL);
	ft_memmove(newptr, ptr, sizeof(int));
	return (newptr);
}

void	*ft_copy_float(void *ptr)
{
	void	*newptr;

	if (!ptr)
		return (NULL);
	newptr = ft_calloc(1, sizeof(float));
	if (!newptr)
		return (NULL);
	ft_memmove(newptr, ptr, sizeof(float));
	return (newptr);
}

void	*ft_copy_bool(void *ptr)
{
	void	*newptr;

	if (!ptr)
		return (NULL);
	newptr = ft_calloc(1, sizeof(bool));
	if (!newptr)
		return (NULL);
	ft_memmove(newptr, ptr, sizeof(bool));
	return (newptr);
}

void	**create_test_array(size_t size)
{
	void	**array;

	array = malloc(size * sizeof(void *));
	if (!array)
		return NULL;
	for (size_t i = 0; i < size; i++) {
		array[i] = strdup("Test String");
		if (!array[i])
		{
			for (size_t j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}
	return (array);
}
