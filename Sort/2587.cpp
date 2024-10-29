#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int input;
    int avg = 0;
    std::vector<int> array;

    for (int i = 0; i < 5; i++)
    {
        std::cin >> input;

        avg += input;
        array.push_back(input);
    }

    avg /= 5;
    std::sort(array.begin(), array.end());

    std::cout << avg << '\n' << array[2] << '\n';
    
    return 0;
}