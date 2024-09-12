#include <iostream>

int gcd(int a, int b)
{
    int c;

    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int loop;
    int a, b;

    std::cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        std::cin >> a >> b;

        std::cout << lcm(a, b) << '\n';
    }

    return 0;
}