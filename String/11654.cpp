#include <iostream>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    char ch;

    std::cin >> ch;

    std::cout << (int)ch << '\n';

    return 0;
}