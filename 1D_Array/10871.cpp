#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int n, x;
    int temp;
    vector<int> array;

    std::cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        std::cin >> temp;
        array.push_back(temp);
    }

    for (int f : array)
    {
        if (f < x)
        {
            std::cout << f << ' ';
        }
    }

    return 0;
}