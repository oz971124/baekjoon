#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

bool comp(std::pair<std::string, int> a, std::pair<std::string, int> b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    else if (a.first.size() != b.first.size())
    {
        return a.first.size() > b.first.size();
    }
    else
    {
        return a.first < b.first;   
    }
}

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;
    std::string input;
    std::map<std::string, int> list;
    
    std::vector<std::string> answer;

    std::cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        std::cin >> input;

        if (input.size() >= m)
        {
            if (list.find(input) == list.end())
            {
                list.insert(std::make_pair(input, 1));
            }
            else
            {
                list[input]++;
            }
        }
    }

    std::vector<std::pair<std::string, int> > sorted_list(list.begin(), list.end());
    std::sort(sorted_list.begin(), sorted_list.end(), comp);

    for (auto iter : sorted_list)
    {
        std::cout << iter.first << '\n';
    }

    return 0;
}