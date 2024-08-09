#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int dan;

    std::cin >> dan;

    for (int i = 1; i < 10; i++)
    {
        std::cout << dan << " * " << i << " = " << dan * i << std::endl;
    }

    return 0;
}