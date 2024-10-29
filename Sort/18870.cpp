#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int loop, input;
    std::vector<int> list;
    std::vector<int> ordered_list;
    std::unordered_map<int, int> index_map;

    std::cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        std::cin >> input;

        list.push_back(input);
    }

    ordered_list = list;
    std::sort(ordered_list.begin(), ordered_list.end());
    ordered_list.erase(std::unique(ordered_list.begin(), ordered_list.end()), ordered_list.end());

    for (int i = 0; i < ordered_list.size(); i++)
    {
        index_map[ordered_list[i]] = i;
    }

    for (int item : list)
    {
        std::cout << index_map[item] << ' ';
    }
    std::cout << '\n';

    return 0;
}