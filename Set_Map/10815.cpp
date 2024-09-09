#include <iostream>
#include <vector>
#include <unordered_set>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;
    int input;
    std::unordered_set<int> n_array;
    std::vector<int> answer;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> input;
        
        n_array.insert(input);        
    }

    std::cin >> m;

    for (int i = 0; i < m; i++)
    {
        std::cin >> input;
        
        if (n_array.find(input) != n_array.end())
        {
            answer.push_back(1);
        }
        else
        {
            answer.push_back(0);
        }
    }

    for (int a : answer)
    {
        std::cout << a << ' ';
    }

    std::cout << '\n';

    return 0;
}