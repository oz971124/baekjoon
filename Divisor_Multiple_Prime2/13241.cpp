#include <iostream>

long long gcd(long long a, long long b)
{
    long long c;

    while (b != 0)
    {
        c = a % b;
        a = b;
        b= c;
    }

    return a;
}

long long lcm(long long a, long long b)
{
    return a * b / gcd(a, b);
}

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long a, b;

    std::cin >> a >> b;

    std::cout << lcm(a, b) << '\n';

    return 0;
}