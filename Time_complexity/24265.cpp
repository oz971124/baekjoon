#include <iostream>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    long input;

    std::cin >> input;

    std::cout << ((input - 1) * input) / 2 << '\n' << 2 << '\n';

    return 0;
}