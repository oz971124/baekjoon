#include <iostream>
#include <vector>

std::vector<bool> sieveOfEratosthenes(int n)
{
    std::vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    
    return isPrime;
}

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    const int MAX = 1000000;

    int loop, input;
    std::vector<bool> primeList = sieveOfEratosthenes(MAX);

    std::cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        int count = 0;

        std::cin >> input;

        for (int i = 2; i <= input / 2; i++)
        {
            if (primeList[i] && primeList[input - i])
            {
                count++;
            }
        }

        std::cout << count << '\n';
    }

    return 0;
}