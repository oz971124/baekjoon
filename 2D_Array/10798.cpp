#include <iostream>
#include <vector>
#include <string>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int loop = 0;
    std::string input;
    std::string answer;
    std::vector<std::string> array;

    for (int i = 0; i < 5; i++)
    {
        std::cin >> input;
        array.push_back(input);

        if (input.size() >= loop)
        {
            loop = input.size();
        }
    }

    for (int i = 0; i < loop; i++)
    {
        for (int j = 0; j <= array.size(); j++)
        {
            if (i < array[j].size())
            {
                answer += array[j][i];
            }
        }
    }

    std::cout << answer << '\n';

    return 0;
}