#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int h, m;

    std::cin >> h >> m;

    if (m < 45)
    {
        h--;
        m = 60 - (45 - m);
    }
    else
    {
        m -= 45;
    }

    if (h < 0)
    {
        h = 23;
    }

    std::cout << h << " " << m << std::endl;

    return 0;
}