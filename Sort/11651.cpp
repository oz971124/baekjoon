#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, x, y;
    std::vector<std::pair<int, int> > array;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> x >> y;

        array.push_back(std::make_pair(y, x));
    }

    std::sort(array.begin(), array.end());

    for (auto yx : array)
    {
        std::cout << yx.second << ' ' << yx.first << '\n';
    }

    return 0;
}