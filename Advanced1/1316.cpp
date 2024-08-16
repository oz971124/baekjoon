#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int count = 0;
    int loop;
    std::string input;
    std::vector<std::string> words;
    std::vector<char> ch;

    std::cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        std::cin >> input;
        words.push_back(input);
    }

    for (std::string word : words)
    {
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] == word[i + 1])
            {
                continue;
            }
            else
            {
                if (std::find(ch.begin(), ch.end(), word[i]) == ch.end())
                {
                    ch.push_back(word[i]);
                }
                else
                {
                    ch.clear();
                    break;
                }
            }
        }

        if (!ch.empty())
        {
            count++;
        }

        ch.clear();
    }

    std::cout << count << '\n';

    return 0;
}