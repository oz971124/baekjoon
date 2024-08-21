#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int loop;
    int input;
    int count = 0;

    std::cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        std::vector<int> temp;

        std::cin >> input;

        for (int i = 1; i <= input; i++)
        {
            if (input % i == 0)
            {
                temp.push_back(i);
            }
        }

        if (temp.size() == 2)
        {
            count++;
        }
    }

    std::cout << count << '\n';
    
    return 0;
}