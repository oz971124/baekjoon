#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int temp;
    const int loop = 9;
    std::vector<int> array;
    std::vector<int>::iterator it;

    for (int i = 0; i < loop; i++)
    {
        std::cin >> temp;
        array.push_back(temp);
    }

    it = max_element(array.begin(), array.end());

    std::cout << *it << '\n';
    std::cout << std::distance(array.begin(), it) + 1 << '\n';

    return 0;
}