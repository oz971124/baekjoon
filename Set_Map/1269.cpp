#include <iostream>
#include <unordered_set>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;
    int input;
    std::unordered_set<int> A, B, A_B, B_A;

    std::cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        std::cin >> input;

        A.insert(input);
    }

    for (int i = 0; i < m; i++)
    {
        std::cin >> input;

        B.insert(input);
    }

    for (int a : A)
    {
        if (B.find(a) == B.end())
        {
            A_B.insert(a);
        }
    }

    for (int b : B)
    {
        if (A.find(b) == A.end())
        {
            B_A.insert(b);
        }
    }

    std::cout << A_B.size() + B_A.size() << '\n';

    return 0;
}