#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, input;
    std::vector<int> array;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> input;

        array.push_back(input);
    }

    std::sort(array.begin(), array.end());

    for (int i : array)
    {
        std::cout << i << '\n';
    }

    return 0;
}