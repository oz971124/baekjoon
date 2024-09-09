#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;
    std::string input;
    std::vector<std::string> answer;
    std::unordered_set<std::string> list;

    std::cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        std::cin >> input;

        list.insert(input);
    }

    for (int i = 0; i < m; i++)
    {
        std::cin >> input;

        if (list.find(input) != list.end())
        {
            answer.push_back(input);
        }
    }

    std::sort(answer.begin(), answer.end());

    std::cout << answer.size() << '\n';

    for (std::string item : answer)
    {
        std::cout << item << '\n';
    }

    return 0;
}