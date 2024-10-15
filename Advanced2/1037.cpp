#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int divisor_count;
    int input;
    std::vector<int> divisors;

    std::cin >> divisor_count;

    for (int i = 0; i < divisor_count; i++)
    {
        std::cin >> input;

        divisors.push_back(input);
    }

    std::sort(divisors.begin(), divisors.end());

    std::cout << divisors[0] * divisors[divisor_count - 1] << '\n';

    return 0;
}