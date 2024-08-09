#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    int num;
    string answer = "";

    std::cin >> num;

    for (int i = 0; i < num / 4; i++)
    {
        answer += "long ";
    }

    answer += "int";

    std::cout << answer << std::endl;

    return 0;
}