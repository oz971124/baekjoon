#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool compare(std::pair<int, std::string> a, std::pair<int, std::string> b)
{
    return a.first < b.first;
}

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    int age;
    std::string name;
    std::vector<std::pair<int, std::string> > array;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> age >> name;

        array.push_back(std::make_pair(age, name));
    }

    std::stable_sort(array.begin(), array.end(), compare);

    for (auto data : array)
    {
        std::cout << data.first << ' ' << data.second << '\n';
    }

    return 0;
}