#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int rows = 9;
    int cols = 9;
    int input;
    int max_value = 0, max_row, max_col;
    std::vector<std::vector<int> > array;

    for (int row = 0; row < rows; row++)
    {
        std::vector<int> temp;

        for (int col = 0; col < cols; col++)
        {
            std::cin >> input;
            temp.push_back(input);
        }
        
        array.push_back(temp);
    }

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            if (max_value <= array[row][col])
            {
                max_value = array[row][col];
                max_row = row;
                max_col = col;
            }
        }
    }

    std::cout << max_value << '\n';
    std::cout << max_row + 1 << ' ' << max_col + 1 << '\n';


    return 0;
}