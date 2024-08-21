#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int start, end;
    int sum = 0;
    std::vector<int> primes;

    std::cin >> start >> end;

    for (int i = start; i <= end; i++)
    {
        std::vector<int> temp;

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                temp.push_back(j);
            }
        }

        if (temp.size() == 2)
        {
            primes.push_back(i);
            sum += i;
        }
    }

    if (primes.empty())
    {
        std::cout << -1 << '\n';
    }
    else
    {
        std::cout << sum << '\n' << primes[0] << '\n';
    }
    

    return 0;
}