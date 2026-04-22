/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_solver.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:40:38 by marvin            #+#    #+#             */
/*   Updated: 2025/11/30 18:40:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int min(int a, int b, int c)
{
    if (a <= b && a <= c)
        return (a);
    if (b <= a && b <= c)
        return (b);
    return (c);
}

void solve_bsq(t_map *map)
{
    int max_size;
    int max_i;
    int max_j;
    int i;
    int j;

    max_size = 0;
    max_i = 0;
    max_j = 0;
    i = -1;
    while (++i < map->rows)
    {
        j = -1;
        while (++j < map->cols)
        {
            if (map->grid[i][j] == map->obstacle)
                map->dp[i][j] = 0;
            else if (i == 0 || j == 0)
                map->dp[i][j] = 1;
            else
                map->dp[i][j] = min(map->dp[i-1][j], map->dp[i][j-1],
                    map->dp[i-1][j-1]) + 1;
            if (map->dp[i][j] > max_size)
            {
                max_size = map->dp[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }
    if (max_size > 0)
    {
        i = max_i - max_size;
        while (++i <= max_i)
        {
            j = max_j - max_size;
            while (++j <= max_j)
                map->grid[i][j] = map->full;
        }
    }
}