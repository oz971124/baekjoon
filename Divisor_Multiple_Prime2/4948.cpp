#include <iostream>

int countPrime(int a)
{
    int count = 0;

    for (int num = a + 1; num <= 2 * a; num++)
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
            count++;
        }
    }

    return count;
}

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int input;

    while (1)
    {
        std::cin >> input;

        if (input == 0)
        {
            break;
        }

        std::cout << countPrime(input) << '\n';
    }

    return 0;
}