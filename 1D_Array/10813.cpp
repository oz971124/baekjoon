#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;
    int first, second;
    int t;
    std::vector<int> array;

    std::cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        array.push_back(i);
    }

    for (int i = 0; i < m; i++)
    {
        std::cin >> first >> second;
        first--;
        second--;

        t = array[first];
        array[first] = array[second];
        array[second] = t;
    }

    for (int tt : array)
    {
        std::cout << tt << ' ';
    }

    return 0;
}