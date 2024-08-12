#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int basket, loop;
    int first, second, ball;
    
    std::vector<int> temp;
    std::cin >> basket >> loop;
    std::vector<int> array(basket, 0);

    for (int i = 0; i < loop; i++)
    {
        std::cin >> first >> second >> ball;
        temp.push_back(first - 1);
        temp.push_back(second - 1);
        temp.push_back(ball);
    }

    for (int i = 0; i < temp.size(); i += 3)
    {
        for (int j = temp[i]; j <= temp[i + 1]; j++)
        {
            array[j] = temp[i + 2];
        }
    }

    for (int i = 0; i < array.size(); i++)
    {
        std::cout << array[i] << ' ';
    }

    return 0;
}