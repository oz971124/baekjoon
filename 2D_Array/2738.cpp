#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int rows, cols;
    int input;
    std::vector<std::vector<int> > array1, array2;

    std::cin >> rows >> cols;

    for (int row = 0; row < rows; row++)
    {
        std::vector<int> temp;

        for (int col = 0; col < cols; col++)
        {
            std::cin >> input;

            temp.push_back(input);
        }

        array1.push_back(temp);
    }

    for (int row = 0; row < rows; row++)
    {
        std::vector<int> temp;

        for (int col = 0; col < cols; col++)
        {
            std::cin >> input;

            temp.push_back(input);
        }

        array2.push_back(temp);
    }

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            std::cout << array1[row][col] + array2[row][col] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}