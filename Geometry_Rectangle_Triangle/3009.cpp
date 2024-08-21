#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int x, y;
    std::vector<std::pair<int, int> > coordinate;

    for (int i = 0; i < 3; i++)
    {
        std::cin >> x >> y;

        coordinate.push_back(std::make_pair(x, y));
    }

    if (coordinate[0].first == coordinate[1].first)
    {
        x = coordinate[2].first;
    }
    else if (coordinate[0].first == coordinate[2].first)
    {
        x = coordinate[1].first;
    }
    else
    {
        x = coordinate[0].first;
    }

    if (coordinate[0].second == coordinate[1].second)
    {
        y = coordinate[2].second;
    }
    else if (coordinate[0].second == coordinate[2].second)
    {
        y = coordinate[1].second;
    }
    else
    {
        y = coordinate[0].second;
    }

    std::cout << x << ' ' << y << '\n';

    return 0;
}