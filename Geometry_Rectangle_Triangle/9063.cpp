#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int x, y;
    int loop;
    std::vector<int> xs, ys;

    std::cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        std::cin >> x >> y;

        xs.push_back(x);
        ys.push_back(y);
    }

    std::sort(xs.begin(), xs.end());
    std::sort(ys.begin(), ys.end());

    x = xs[xs.size() - 1] - xs[0];
    y = ys[ys.size() - 1] - ys[0];

    std::cout << x * y << '\n';

    return 0;
}