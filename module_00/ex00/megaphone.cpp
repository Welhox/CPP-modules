
#include <iostream>

int main(int argc, char *argv[])
{
    int     x = 0;
    bool    empty = true;

    if (argc >= 2)
    {
        for(int i = 1; argv[i]; i++)
        {
            x = 0;
            while (argv[i][x])
            {
                argv[i][x] = toupper(argv[i][x]);
                x++;
            }
            if (x > 0)
                empty = false;
            std::cout << argv[i];
        }
    }
    if (empty == true)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << "\n";
    return (0);
}