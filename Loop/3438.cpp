#include <iostream>

int main(int argc, char *argv[])
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int loop;

    std::cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    return 0;
}