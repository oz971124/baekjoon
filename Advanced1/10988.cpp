#include <iostream>
#include <string>
#include <algorithm>

int main (int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string input;
    std::string temp;

    std::cin >> input;
    
    temp = input;
    std::reverse(temp.begin(), temp.end());

    if (input == temp)
    {
        std::cout << 1 << '\n';
    }
    else
    {
        std::cout << 0 << '\n';
    }

    return 0;
}