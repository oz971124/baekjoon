#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int loop, input;
    std::vector<int> array;

    std::cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        std::cin >> input;

        array.push_back(input);
    }

    std::sort(array.begin(), array.end());

    for (int i = 0; i < array.size(); i++)
    {
        std::cout << array[i] << '\n';
    }

    return 0;
}