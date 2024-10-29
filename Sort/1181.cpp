#include <iostream>
#include <vector>
#include <algorithm>

bool compare(std::string a, std::string b)
{
    if (a.size() == b.size())
    {
        return a < b;
    }
    else
    {
        return a.size() < b.size();
    }
}

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::string input;
    std::vector<std::string> array;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> input;

        if (std::find(array.begin(), array.end(), input) == array.end())
        {
            array.push_back(input);
        }   
    }

    std::sort(array.begin(), array.end(), compare);

    for (std::string str : array)
    {
        std::cout << str << '\n';
    }

    return 0;
}