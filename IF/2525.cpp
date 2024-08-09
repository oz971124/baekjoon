#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int h, m;
    int time;

    std::cin >> h >> m;
    std::cin >> time;

    h += time / 60;
    m += time % 60;

    if (m >= 60)
    {
        h++;
        m -= 60;
    }

    if (h >= 24)
    {
        h -= 24;
    }

    std::cout << h << " " << m << std::endl;

    return 0;
}