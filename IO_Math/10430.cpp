#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c;

    std::cin >> a >> b >> c;

    std::cout << (a + b) % c << std::endl;
    std::cout << (a % c + b % c) % c << std::endl;
    std::cout << a * b % c << std::endl;
    std::cout << (a % c) * (b % c) % c << std::endl;

    return 0;
}