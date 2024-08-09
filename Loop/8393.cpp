#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    int sum = 0;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    std::cout << sum << std::endl;

    return 0;
}