#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a, b, c;
    std::string answer;

    std::cin >> a >> b >> c;

    if (a == 60 && b == 60 && c == 60)
    {
        answer = "Equilateral";
    }
    else if (a + b + c == 180)
    {
        if (a == b || b == c || c == a)
        {
            answer = "Isosceles";
        }
        else
        {
            answer = "Scalene";
        }
    }
    else
    {
        answer = "Error";   
    }

    std::cout << answer << '\n';

    return 0;
}