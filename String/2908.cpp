#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string first, second;

    std::cin >> first >> second;

    std::reverse(first.begin(), first.end());
    std::reverse(second.begin(), second.end());

    if (stoi(first) > stoi(second))
    {
        std::cout << first << '\n';
    }
    else
    {
        std::cout << second << '\n';
    }

    return 0;
}