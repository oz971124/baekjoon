#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int num;
    int sum = 0;
    std::string word;

    std::cin >> num >> word;

    for (int i = 0; i < word.size(); i++)
    {
        sum += ((int)word[i] - '0');
    }

    std::cout << sum << '\n';

    return 0;
}