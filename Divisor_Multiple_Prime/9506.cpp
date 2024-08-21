#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int input;

    while (1)
    {
        int sum = 0;
        std::vector<int> temp;

        std::cin >> input;

        if (input == -1)
        {
            break;
        }

        for (int i = 1; i < input; i++)
        {
            if (input % i == 0)
            {
                temp.push_back(i);
                sum += i;
            }
        }

        if (sum == input)
        {
            std::cout << input << " = ";
            
            for (int i = 0; i < temp.size(); i++)
            {
                std::cout << temp[i];

                if (i != temp.size() - 1)
                {
                    std::cout << " + ";
                }
            }
            std::cout << '\n';
        }
        else
        {
            std::cout << input << " is NOT perfect." << '\n';
        }
    }

    return 0;
}