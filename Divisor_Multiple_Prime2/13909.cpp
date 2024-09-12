#include <iostream>
#include <cmath>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int input;

    std::cin >> input;

    std::cout << int(sqrt(input)) << '\n';

    return 0;
}