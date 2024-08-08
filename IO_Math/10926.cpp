#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string s;

    std::cin >> s;

    s += "??!";

    std::cout << s << std::endl;

    return 0;
}