#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string a, b;

    std::cin >> a >> b;
    int ra = stoi(a);

    for (int i = b.size() - 1; i >= 0; i--)
    {
        int temp = b[i] - '0';

        std::cout << ra * temp << std::endl;
    }

    std::cout << stoi(a) * stoi(b) << std::endl;

    return 0;
}