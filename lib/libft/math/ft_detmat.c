/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detmat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:13:06 by vviterbo          #+#    #+#             */
/*   Updated: 2025/06/10 15:57:59 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	*ft_detmat(t_mat mat);
double	*ft_detmat22(t_mat mat);

double	*ft_detmat(t_mat mat)
{
	double	det;
	double	*subdet;
	t_mat	*submat;
	size_t	i;

	if (mat.dim[0] != mat.dim[1])
		return (NULL);
	if (mat.dim[0] == 2)
		return (ft_detmat22(mat));
	i = 0;
	while (i < mat.dim[0])
	{
		submat = ft_getsubmat(mat, 0, i);
		if (!submat)
			return (NULL);
		subdet = ft_detmat(*submat);
		ft_free_mat(submat);
		if (!subdet)
			return (NULL);
		det += (i % 2 == 0) * *subdet - (i % 2 != 0) * *subdet;
		i++;
	}
	return (&det);
}

double	*ft_detmat22(t_mat mat)
{
	double	det;

	if (mat.dim[0] != 2 || mat.dim[1] != 2)
		return (NULL);
	det = mat.val[0][0] * mat.val[1][1] - mat.val[1][0] * mat.val[0][1];
	return (&det);
}
