#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int num, k_th_smallest_num;
    std::vector<int> temp;

    std::cin >> num >> k_th_smallest_num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            temp.push_back(i);
        }
    }

    if (temp.size() < k_th_smallest_num)
    {
        std::cout << 0 << '\n';
    }
    else
    {
        std::cout << temp[k_th_smallest_num - 1] << '\n';
    }

    return 0;
}