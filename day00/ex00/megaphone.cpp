#include <cctype>
#include <string>
#include <iostream>

/*
** Capitalize all the arguments, and prints them by byte to the standard output.
*/

void
megaphone(int argc, char *argv[])
{
    for (int i = 1; i < argc; i += 1)
    {
        for (int j = 0; j < (int)strlen(argv[i]); j += 1)
        {
            std::cout << (char)toupper(argv[i][j]);
        }
    }
    std::cout << std::endl;
}

// void    MegaPhone(int ac, char **av)
// {
//     int i = 0;
//     int j = 0;

//     while (i < ac)
//     {

//     }
//}

/*
** Get things rolling.
*/

int
main(int argc, char *argv[])
{
    if (argc > 1)
    {
        megaphone(argc, argv);
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return (0);
}