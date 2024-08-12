#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int test_case;
    int num;
    std::string word;
    std::vector<std::pair<int, std::string> > temp;

    std::cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        std::cin >> num >> word;
        temp.push_back(std::make_pair(num, word));
    }

    for (auto w : temp)
    {
        for (int i = 0; i < w.second.size(); i++)
        {
            for (int j = 0; j < w.first; j++)
            {
                std::cout << w.second[i];
            }
        }
        std::cout << '\n';
    }

    return 0;
}