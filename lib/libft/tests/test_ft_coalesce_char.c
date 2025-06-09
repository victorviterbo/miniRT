/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_coalesce_char.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:39:23 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/07 23:18:21 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_coalesce_char(void);

bool	test_ft_coalesce_char(void)
{
	char	*str;

	str = ft_coalesce_char("__lorem___ipsum___dolor_sit_amet", '_', false);
	if (strcmp(str, "lorem_ipsum_dolor_sit_amet"))
	{
		printf("%s\n", str);
		printf("test_ft_coalesce_char failed on test 1\n");
		return (free(str), false);
	}
	free(str);
	str = ft_coalesce_char("lorem_ipsum___dolor_sit_amet", '_', false);
	if (strcmp(str, "lorem_ipsum_dolor_sit_amet"))
	{
		printf("test_ft_coalesce_char failed on test 2\n");
		return (free(str), false);
	}
	free(str);
	str = ft_coalesce_char("__lorem_ipsum___dolor_sit____amet___", '_', false);
	if (strcmp(str, "lorem_ipsum_dolor_sit_amet"))
	{
		printf("test_ft_coalesce_char failed on test 3\n");
		return (free(str), false);
	}
	free(str);
	str = ft_coalesce_char("__lorem_ipsum___dolor_sit_amet_", '_', false);
	if (strcmp(str, "lorem_ipsum_dolor_sit_amet"))
	{
		printf("test_ft_coalesce_char failed on test 4\n");
		return (free(str), false);
	}
	free(str);
	str = ft_coalesce_char("_lorem_ipsum___dolor_sit_amet", '_', false);
	if (strcmp(str, "lorem_ipsum_dolor_sit_amet"))
	{
		printf("test_ft_coalesce_char failed on test 5\n");
		return (free(str), false);
	}
	free(str);
	str = ft_strdup("__lorem_ipsum___dolor_sit_amet___");
	str = ft_coalesce_char(str, '_', true);
	if (strcmp(str, "lorem_ipsum_dolor_sit_amet"))
	{
		printf("test_ft_coalesce_char failed on test 6\n");
		return (free(str), false);
	}
	free(str);
	return (true);
}
