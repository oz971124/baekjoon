#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int loop;
    std::vector<std::string> words;

    std::cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        std::string word;

        std::cin >> word;

        words.push_back(word);
    }

    for (std::string word : words)
    {
        std::cout << word.front() << word.back() << '\n';
    }

    return 0;
}