#include <iostream>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int row, col;

    std::cin >> row >> col;

    std::cout << row * col << '\n';

    return 0;
}