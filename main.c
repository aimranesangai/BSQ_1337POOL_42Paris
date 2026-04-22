#include "bsq.h"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        process_stdin();
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            process_file(argv[i]);
            if (i < argc - 1)
                write(1, "\n", 1);
        }
    }
    return (0);
}