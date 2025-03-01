/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moussade <moussade@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:18:22 by moussade          #+#    #+#             */
/*   Updated: 2025/03/01 14:26:40 by moussade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define GRID_SIZE 4

void printGrid(int grid[GRID_SIZE][GRID_SIZE])
{
	for (int i = 0; i < GRID_SIZE; i++)
	{
		for (int j = 0; j < GRID_SIZE; j++)
		{
			printf("%d ", grid[i][j]);
		}
		printf("\n");
	}
}

int	main()
{
	int grid[GRID_SIZE][GRID_SIZE] = {0};
	printGrid(grid);
	return (0);
}
