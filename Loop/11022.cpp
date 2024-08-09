#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int loop;
    int index = 0;
    std::vector<int> temp;

    std::cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        int f, s;

        std::cin >> f >> s;

        temp.push_back(f);
        temp.push_back(s);
    }    

    for (int i = 0; i < loop; i++)
    {
        int answer = temp[index] + temp[index + 1];
        std::cout << "Case #" << i + 1 << ": " << temp[index] << " + "
        << temp[index + 1] << " = " << answer << '\n';
        index += 2;
    }

    return 0;
}