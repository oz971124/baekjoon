#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string input, temp;
    std::stringstream ss;

    std::getline(std::cin, input);
    ss.str(input);

    while (ss >> temp)
    {
        std::cout << temp << '\n';
    }

    return 0;
}