#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int x, y, w, h;
    int x_to_w;
    int y_to_h;
    std::vector<int> distance;

    std::cin >> x >> y >> w >> h;

    distance.push_back(x);
    distance.push_back(y);
    distance.push_back(w - x);
    distance.push_back(h - y);
    
    std::sort(distance.begin(), distance.end());

    std::cout << distance[0] << '\n';

    return 0;
}