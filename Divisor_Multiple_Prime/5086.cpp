#include <iostream>
#include <vector>
#include <string>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int first, second;
    std::string answer;
    std::vector<int> input;

    while (1)
    {
        std::cin >> first >> second;

        if (first == 0 && second == 0)
        {
            break;
        }

        input.push_back(first);
        input.push_back(second);
    }

    for (int i = 0; i < input.size(); i += 2)
    {
        if ((input[i + 1] % input[i]) == 0)
        {
            answer = "factor";
        }
        else if ((input[i] % input[i + 1]) == 0)
        {
            answer = "multiple";
        }
        else
        {
            answer = "neither";
        }

        std::cout << answer << '\n';
    }

    return 0;
}