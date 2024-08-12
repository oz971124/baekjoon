#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    const int student_num = 30;
    int num;
    std::vector<bool> list(student_num, false);

    for (int i = 0; i < student_num - 2; i++)
    {
        std::cin >> num;

        list[num - 1] = true;
    }

    for (int i = 0; i < student_num; i++)
    {
        if (!list[i])
        {
            std::cout << i + 1 << '\n';
        }
    }

    return 0;
}