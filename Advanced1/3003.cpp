#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int input;
    std::vector<int> pieces = {1, 1, 2, 2, 2, 8};

    for (int i = 0; i < pieces.size(); i++)
    {
        std::cin >> input;

        pieces[i] -= input;
    }

    for (int i = 0; i < pieces.size(); i++)
    {
        std::cout << pieces[i] << ' ';
    }

    std::cout << '\n';

    return 0;
}