#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b;
    string s = "";

    std::cin >> a >> b;

    if (a > b)
    {
        s = ">";
    }
    else if (a < b)
    {
        s = "<";
    }
    else
    {
        s = "==";
    }

    std::cout << s << std::endl;

    return 0;
}