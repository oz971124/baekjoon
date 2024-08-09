#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    int loop;
    vector<int> temp;

    std::cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        int f, s;

        std::cin >> f >> s;
        temp.push_back(f);
        temp.push_back(s);
    }

    int index = 0;
    for (int i = 0; i < loop; i++)
    {
        std::cout << temp[index++] + temp[index++] << std::endl;
    }

    return 0;
}