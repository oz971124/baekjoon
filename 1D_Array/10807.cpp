#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int loop;
    int num;
    int find_num;
    int count = 0;
    vector<int> temp;
    

    std::cin >> loop;


    while (temp.size() < loop)
    {
        std::cin >> num;
        temp.push_back(num);
    }

    std::cin >> find_num;
    
    for (int n : temp)
    {
        if (n == find_num)
        {
            count++;
        }
    }

    std::cout << count << '\n';

    return 0;
}