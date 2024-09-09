#include <iostream>
#include <string>
#include <algorithm>
#include <set>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::string input, temp;
    std::set<std::string> list;
    
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> input >> temp;

        if (list.find(input) == list.end())
        {
            list.insert(input);
        }
        else
        {
            list.erase(input);
        }
    }

    for (auto it = list.rbegin(); it != list.rend(); it++)
    {
        std::cout << *it << '\n';
    }

    return 0;
}