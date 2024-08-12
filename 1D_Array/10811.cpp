#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;
    int start, end;
    std::vector<int> array;

    std::cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        array.push_back(i);
    }

    for (int i = 0; i < m; i++)
    {
        std::cin >> start >> end;
        start--;
        end--;

        std::reverse(array.begin() + start, array.begin() + end + 1);
    }

    for (int a : array)
    {
        std::cout << a << ' ';
    }
    
    return 0;
}