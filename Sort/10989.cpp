#include <iostream>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, input;
    int array[10000 + 1] = {0};

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> input;

        array[input]++;
    }

    for (int i = 1; i <= 10000; i++)
    {
        for (int j = 0; j < array[i]; j++)
        {
            std::cout << i << '\n';
        }
    }

    return 0;
}