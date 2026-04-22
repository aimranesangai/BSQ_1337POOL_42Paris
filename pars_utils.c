#include "bsq.h"

int parse_first_line(char *line, t_map *map)
{
    int len;

    len = 0;
    while (line[len] && line[len] != '\n')
        len++;
    if (len < 4)
        return (0);
    map->full = line[--len];
    map->obstacle = line[--len];
    map->empty = line[--len];
    line[len] = '\0';
    map->rows = atoi(line);
    return (map->rows > 0);
}

int read_line(int fd, char *buffer, int max_size)
{
    int     i;
    char    c;

    i = 0;
    while (i < max_size - 1 && read(fd, &c, 1) > 0)
    {
        if (c == '\n')
            break;
        buffer[i++] = c;
    }
    buffer[i] = '\0';
    return (i);
}

int read_map_from_fd(int fd, t_map *map)
{
    char    first_line[256];
    char    test_line[256];
    int     test_len;
    int     i;
    int     j;

    if (read_line(fd, first_line, sizeof(first_line)) <= 0)
        return (0);
    if (!parse_first_line(first_line, map))
        return (0);
    test_len = read_line(fd, test_line, sizeof(test_line));
    if (test_len <= 0)
        return (0);
    map->cols = test_len;
    map->grid = malloc(map->rows * sizeof(char *));
    map->dp = malloc(map->rows * sizeof(int *));
    if (!map->grid || !map->dp)
        return (0);
    i = -1;
    while (++i < map->rows)
    {
        map->grid[i] = malloc(map->cols + 1);
        map->dp[i] = malloc(map->cols * sizeof(int));
        if (!map->grid[i] || !map->dp[i])
            return (0);
    }
    j = -1;
    while (++j < map->cols)
        map->grid[0][j] = test_line[j];
    map->grid[0][map->cols] = '\0';
    i = 0;
    while (++i < map->rows)
    {
        if (read_line(fd, map->grid[i], map->cols + 1) != map->cols)
            return (0);
        map->grid[i][map->cols] = '\0';
    }
    return (1);
}
