#include <iostream>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long input;

    std::cin >> input;

    std::cout << input * 4 << '\n';

    return 0;
}