#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a, b, c;
    std::string answer;

    while (1)
    {
        std::vector<int> temp;
        std::cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }

        temp.push_back(a);
        temp.push_back(b);
        temp.push_back(c);

        std::sort(temp.begin(), temp.end());

        if (temp[2] >= temp[0] + temp[1])
        {
            answer = "Invalid";
        }
        else if (temp[0] == temp[2])
        {
            answer = "Equilateral";
        }
        else if (temp[0] == temp[1] || temp[1] == temp[2])
        {
            answer = "Isosceles";
        }
        else
        {
            answer = "Scalene";
        }
        
        std::cout << answer << '\n';
    }

    return 0;
}