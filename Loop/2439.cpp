#include <iostream>

int main(int argc, char *argv[])
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int loop;

    std::cin >> loop;

    for (int i = loop; i > 0; i--)
    {
        for (int j = 1; j <= loop; j++)
        {
            if (j < i)
            {
                std::cout << ' ';
            }
            else
            {
                std::cout << '*';
            }
        }
        std::cout << '\n';
    }

    return 0;
}