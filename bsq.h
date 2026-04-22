#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_map
{
    int     rows;
    int     cols;
    char    empty;
    char    obstacle;
    char    full;
    char    **grid;
    int     **dp;
}   t_map;

// Function declarations
void    ft_putstr(char *str);
int     min(int a, int b, int c);
int     read_line(int fd, char *buffer, int max_size);
int     parse_first_line(char *line, t_map *map);
int     read_map_from_fd(int fd, t_map *map);
void    solve_bsq(t_map *map);
void    free_map(t_map *map);
void    process_file(char *filename);
void    process_stdin(void);

#endif