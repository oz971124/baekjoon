#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int loop;
    int row, col;
    int size = 0;
    std::vector<std::vector<bool> > array(100, std::vector<bool> (100,false));

    std::cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        std::cin >> row >> col;

        for (int r = row; r < row + 10; r++)
        {
            for (int c = col; c < col + 10; c++)
            {
                array[r][c] = true;
            }
        }
    }

    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array[i].size(); j++)
        {
            if (array[i][j])
            {
                size++;
            }
        }
    }

    std::cout << size << '\n';

    return 0;
}