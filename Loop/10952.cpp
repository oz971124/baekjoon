#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    std::vector<int> temp;

    while (1)
    {
        int f, s;
        
        std::cin >> f >> s;

        if (f == 0 && s == 0)
        {
            break;
        }

        temp.push_back(f);
        temp.push_back(s);
    }

    for (int i = 0; i < temp.size(); i += 2)
    {
        std::cout << temp[i] + temp[i + 1] << '\n';
    }
    
    return 0;
}