#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int f, s;
    std::vector<int> temp;

    while (std::cin >> f >> s)
    {
        temp.push_back(f);
        temp.push_back(s);
    }

    for (int i = 0; i < temp.size(); i += 2)
    {
        std::cout << temp[i] + temp[i + 1] << '\n';
    }
    
    return 0;
}