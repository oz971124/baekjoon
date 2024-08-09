#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    int total_price, t;
    int sum = 0;
    vector<pair <int, int> > temp;

    std::cin >> total_price;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        int price, count;

        std::cin >> price >> count;

        temp.push_back(make_pair(price, count));
    }

    for (const auto p : temp)
    {
        sum = sum + (p.first * p.second);
    }

    if (total_price == sum)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }




    return 0;
}