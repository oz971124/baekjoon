#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x, y;
    int quadrant;

    std::cin >> x >> y;

    if (x > 0)
    {
        if (y > 0)
        {
            quadrant = 1;
        }
        else
        {
            quadrant = 4;
        }
    }
    else
    {
        if (y > 0)
        {
            quadrant = 2;
        }        
        else
        {
            quadrant = 3;
        }
    }

    std::cout << quadrant << std::endl;

    return 0;
}