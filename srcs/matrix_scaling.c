/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_scaling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 23:13:53 by ntoniolo          #+#    #+#             */
/*   Updated: 2018/07/12 20:58:28 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

void	matrix_scaling(t_matrix *m, const float s)
{
	m->matrix[0][0] *= s;
	m->matrix[1][1] *= s;
	m->matrix[2][2] *= s;
}

void	matrix_vector_scaling(t_matrix *m, t_vector *vec)
{
	m->matrix[0][0] *= vec->x;
	m->matrix[1][1] *= vec->y;
	m->matrix[2][2] *= vec->z;
}
