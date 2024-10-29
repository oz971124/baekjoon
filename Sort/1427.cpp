#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string n;
    std::vector<int> array;

    std::cin >> n;

    for (int i = 0; i < n.size(); i++)
    {
        array.push_back(n[i] - '0');
    }

    std::sort(array.begin(), array.end(), std::greater<int>());

    for (int i = 0; i < array.size(); i++)
    {
        std::cout << array[i];
    }

    std::cout << '\n';

    return 0;
}