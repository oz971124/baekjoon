#include <iostream>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int input;

    std::cin >> input;

    for (int i = 1; i <= input; i++)
    {
        for (int j = 1; j <= input - i; j++)
        {
            std::cout << ' ';
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    for (int i = input - 1; i >= 1; i--)
    {
        for (int j = 1; j <= input - i; j++)
        {
            std::cout << ' ';
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    return 0;
}