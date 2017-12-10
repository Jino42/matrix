#include "matrix.h"

t_matrix		matrix_get_mult_matrix(const t_matrix *a, const t_matrix *b)
{
	int			x;
	int			y;
	float		temp;
	t_matrix	new;

	new = matrix_get_identity();
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			temp = a->matrix[y][0] * b->matrix[0][x];
			temp = temp + a->matrix[y][1] * b->matrix[1][x];
			temp = temp + a->matrix[y][2] * b->matrix[2][x];
			temp = temp + a->matrix[y][3] * b->matrix[3][x];
			new.matrix[y][x] = temp;
			x++;
		}
		y++;
	}
	return (new);
}
