#include <iostream>

bool isItPrime(long long num)
{
    if (num < 2)
    {
        return false;
    }

    for (long long i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int loop;
    long long input;

    std::cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        std::cin >> input;

        while (!isItPrime(input))
        {
            input++;
        }

        std::cout << input << '\n';   
    }

    return 0;
}