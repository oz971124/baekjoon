#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string word;

    std::cin >> word;

    std::cout << word.size() << '\n';

    return 0;
}