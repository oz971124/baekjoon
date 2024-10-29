#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, k;
    int input;
    std::vector<int> array;

    std::cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        std::cin >> input;

        array.push_back(input);
    }

    std::sort(array.begin(), array.end(), std::greater<int>());

    std::cout << array[k - 1] << '\n';

    return 0;
}