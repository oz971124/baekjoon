#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int input;
    std::vector<int> prime_factorization;

    std::cin >> input;

    while (input >= 2)
    {
        for (int i = 2; i <= input; i++)
        {
            if (input % i == 0)
            {
                prime_factorization.push_back(i);
                input /= i;
                break;
            }
        }
    }
    
    for (int prime : prime_factorization)
    {
        std::cout << prime << '\n';
    }

    return 0;
}