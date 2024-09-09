#include <iostream>
#include <string>
#include <unordered_set>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;
    int count = 0;
    std::string input;
    std::unordered_set<std::string> n_array;

    std::cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        std::cin >> input;

        n_array.insert(input);
    }

    for (int i = 0; i < m; i++)
    {
        std::cin >> input;

        if (n_array.find(input) != n_array.end())
        {
            count++;
        }
    }

    std::cout << count << '\n';

    return 0;
}