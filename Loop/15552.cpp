#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

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

    for (int i = 0; i < temp.size(); i += 2)
    {
        std::cout << temp[i] + temp[i + 1] << '\n';
    }

    return 0;
}