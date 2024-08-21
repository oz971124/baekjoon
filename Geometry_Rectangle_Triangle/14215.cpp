#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a, b, c;
    int answer = 0;

    std::cin >> a >> b >> c;

    std::vector<int> temp = {a, b, c};
    std::sort(temp.begin(), temp.end());

    if (temp[2] >= temp[0] + temp[1])
    {
        answer = 2 * (temp[0] + temp[1]) - 1;
    }
    else
    {
        answer = temp[0] + temp[1] + temp[2];
    }

    std::cout << answer << '\n';

    return 0;
}