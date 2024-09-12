#include <iostream>

int printPrime(int start, int end)
{
    for (int num = start; num <= end; num++)
    {
        if (num < 2)
        {
            continue;
        }
        
        bool isPrime = true;

        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            std::cout << num << '\n';
        }
    }

    return 0;
}

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a, b;

    std::cin >> a >> b;

    printPrime(a, b);

    return 0;
}