#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string word;

    std::cin >> word;

    for (char i = 'a'; i <= 'z'; i++)
    {
        auto n = word.find(i);
        if (n != std::string::npos)
        {
            std::cout << n << ' ';
        }
        else
        {
            std::cout << -1 << ' ';
        }
    }

    std::cout << '\n';

    return 0;
}