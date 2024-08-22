#include <iostream>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    long input;

    std::cin >> input;

    std::cout << (input - 2) * (input - 1) * input / 6 << '\n' << 3 << '\n';

    return 0;
}