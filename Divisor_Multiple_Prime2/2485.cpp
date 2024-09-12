#include <iostream>
#include <vector>
#include <numeric>

int gcd(int a, int b)
{
    int c;

    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int loop, input;
    int least_dis;
    int count = 0;
    std::vector<int> distance, difference;

    std::cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        std::cin >> input;

        distance.push_back(input); 
    }

    for (int i = 1; i < distance.size(); i++)
    {
        difference.push_back(distance[i] - distance[i - 1]);
    }

    least_dis = difference[0];

    for (int i = 1; i < difference.size(); i++)
    {
        least_dis = gcd(least_dis, difference[i]);
    }

    for (int i = 0; i < difference.size(); ++i)
    {
        count += (difference[i] / least_dis) - 1;
    }

    std::cout << count << '\n';

    return 0;
}