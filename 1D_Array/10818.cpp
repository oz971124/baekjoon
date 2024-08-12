#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int n;
    int temp;
    vector<int> array;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> temp;
        array.push_back(temp);
    }

    std::cout << *min_element(array.begin(), array.end()) << ' ' << *max_element(array.begin(), array.end()) << '\n';

    return 0;
}