#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int input_count, input;
    int sum = 0;
    int arithmetic_mean, median, mode, range = 0;
    std::map<int, int> list;
    std::vector<int> median_list;

    std::cin >> input_count;

    for (int i = 0; i < input_count; i++)
    {
        std::cin >> input;
        sum += input;
        median_list.push_back(input);

        if (list.find(input) == list.end())
        {
            list.insert(std::make_pair(input, 1));
        }
        else
        {
            list[input]++;
        }
    }

    std::sort(median_list.begin(), median_list.end());
    std::vector<std::pair<int, int> > sorted_list(list.begin(), list.end());

    // 산술평균
    arithmetic_mean = round((double)sum / input_count);
    std::cout << arithmetic_mean << '\n';

    // 중앙값
    median = median_list[input_count / 2];
    std::cout << median << '\n';

    // 최빈값
    int temp;
    std::vector<int> temp_list;

    temp = sorted_list[0].second;

    for (std::pair<int, int> item : sorted_list)
    {
        if (temp < item.second)
        {
            temp = item.second;
        }
    }

    for (std::pair<int, int> item : sorted_list)
    {
        if (item.second == temp)
        {
            temp_list.push_back(item.first);
        }
    }
    
    if (temp_list.size() == 1)
    {
        std::cout << temp_list[0] << '\n';
    }
    else
    {
        std::cout << temp_list[1] << '\n';
    }

    // 범위
    if (input_count != 1)
    {
        range = sorted_list[sorted_list.size() - 1].first - sorted_list.begin() -> first;
    }
    std::cout << range << '\n';

    return 0;
}