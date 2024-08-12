#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int start = -1;
    int count = 0;
    std::string sentence;
    std::string temp;
    std::stringstream ss;

    std::getline(std::cin, sentence);
    ss.str(sentence);

    while (ss >> temp)
    {
        count++;
    }

    std::cout << count << '\n';

    return 0;
}