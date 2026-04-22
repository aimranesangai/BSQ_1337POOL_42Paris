#include "bsq.h"

void free_map(t_map *map)
{
    int i;

    if (!map)
        return;
    if (map->grid)
    {
        i = -1;
        while (++i < map->rows)
        {
            if (map->grid[i])
                free(map->grid[i]);
        }
        free(map->grid);
    }
    if (map->dp)
    {
        i = -1;
        while (++i < map->rows)
        {
            if (map->dp[i])
                free(map->dp[i]);
        }
        free(map->dp);
    }
}