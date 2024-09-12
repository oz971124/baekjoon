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

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a, b, c, d;
    int son, mom;
    int g_c_d;

    std::cin >> a >> b >> c >> d;

    son = a * d + c * b;
    mom = b * d;
    
    g_c_d = gcd(son, mom);

    std::cout << son / g_c_d << ' ' << mom / g_c_d << '\n';

    return 0;
}