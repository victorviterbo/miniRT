/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:56:44 by vviterbo          #+#    #+#             */
/*   Updated: 2025/02/21 13:06:20 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include "../libft.h"

# include <unistd.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <ctype.h>
# include <float.h>

int		main(int argc, char *argv[]);
t_list	**ft_arr2lst(void **arr, void *(*f) (void *), size_t size);
void	**create_test_array(size_t size);
void	*ft_dummy_2(void *ptr);
void	*ft_copy_int(void *ptr);
void	*ft_copy_float(void *ptr);
void	*ft_copy_bool(void *ptr);

bool	test_ft_strjoin_ip(void);
bool	test_ft_isint(void);
bool	test_ft_min(void);
bool	test_ft_max(void);
bool	test_ft_lst_isin_void(void);
bool	test_ft_lstmax(void);
bool	test_ft_lstmin(void);
bool	test_ft_strarray_mapi(void);
bool	test_ft_arrlen(void);
bool	test_ft_free_array(void);
bool	test_ft_get_next_line(void);
bool	test_ft_strjoin_gnl(void);
bool	test_ft_lstcut(void);
bool	test_ft_lst_getn(void);
bool	test_ft_abs(void);
bool	test_ft_atof(void);
bool	test_ft_readfile(void);
bool	test_ft_array_append(void);
bool	test_ft_coalesce_char(void);
bool	test_ft_count_strocc(void);
bool	test_ft_str_replace(void);
bool	test_ft_strcmp(void);
bool	test_ft_tree(void);
bool	test_ft_range(void);
bool	test_ft_lstpop(void);

#endif
