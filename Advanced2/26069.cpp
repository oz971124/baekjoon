#include <iostream>
#include <string>
#include <unordered_set>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int loop;
    int count = 0;
    std::string input1, input2;
    std::unordered_set<std::string> list;

    list.insert("ChongChong");

    std::cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        std::cin >> input1 >> input2;

        if (list.find(input1) != list.end())
        {
            list.insert(input2);
        }
        else if (list.find(input2) != list.end())
        {
            list.insert(input1);
        }
    }

    std::cout << list.size() << '\n';

    return 0;
}