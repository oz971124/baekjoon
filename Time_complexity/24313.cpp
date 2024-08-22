#include <iostream>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long a1, a0, c, n0;

    std::cin >> a1 >> a0 >> c >> n0;

    if (c - a1 < 0|| (c - a1) * n0 < a0)
    {
        std::cout << 0 << '\n';
    }
    else
    {
        std::cout << 1 << '\n';
    }

    return 0;
}