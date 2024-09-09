#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;
    std::string input;
    std::vector<int> answer;
    std::unordered_map<std::string, int> list;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> input;

        if (list.find(input) == list.end())
        {
            list.insert(std::make_pair(input, 1));
        }
        else
        {
            list[input]++;
        }
    }

    std::cin >> m;

    for (int i = 0; i < m; i++)
    {
        std::cin >> input;

        if (list.find(input) == list.end())
        {
            answer.push_back(0);
        }
        else
        {
            answer.push_back(list[input]);
        }
    }

    for (int item : answer)
    {
        std::cout << item << ' ';
    }
    
    std::cout << '\n';

    return 0;
}