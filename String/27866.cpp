#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string word;
    int index;

    std::cin >> word >> index;

    std::cout << word[index - 1] << '\n';

    return 0;
}