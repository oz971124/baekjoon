#include <iostream>
#include <string>
#include <unordered_set>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int loop;
    int count = 0;
    std::string input;
    std::unordered_set<std::string> list;

    std::cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        std::cin >> input;

        if (input == "ENTER")
        {
            count += list.size();
            list.clear();
        }
        else
        {
            list.insert(input);
        }
    }

    count += list.size();

    std::cout << count << '\n';

    return 0;
}