#include <iostream>
#include <string>
#include <unordered_map>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;
    std::string input;
    std::unordered_map<std::string, std::string> list;

    std::cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        std::cin >> input;
        std::string number = std::to_string(i);
        list[input] = number;
        list[number] = input;
    }

    for (int i = 0; i < m; i++)
    {
        std::cin >> input;

        std::cout << list[input] << '\n';
    }

    return 0;
}