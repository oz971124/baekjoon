#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    const int loop = 10;
    int temp;
    std::vector<int> array;

    for (int i = 0; i < loop; i++)
    {
        std::cin >> temp;
        temp %= 42;

        if (std::find(array.begin(), array.end(), temp) == array.end())
        {
            array.push_back(temp);
        }
    }

    std::cout << array.size() << '\n';

    return 0;
}