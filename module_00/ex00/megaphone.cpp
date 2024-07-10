
#include <iostream>

int main(int argc, char *argv[])
{
    int i = 1;
    int x = 0;
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        while (argv[i])
        {
            x = 0;
            while (argv[i][x])
            {
                if (argv[i][x] >= 'a' && argv[i][x] <= 'z')
                    argv[i][x] -= 32;       
                x++;
            }
            std::cout << argv[i];
            i++;
        }
    }
    std::cout << "\n";
    return (0);
}