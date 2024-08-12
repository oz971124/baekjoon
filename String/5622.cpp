#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int time = 0;
    std::string word;

    std::cin >> word;

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= 'A' && word[i] <= 'C')
        {
            time += 3;
        }
        else if (word[i] >= 'D' && word[i] <= 'F')
        {
            time += 4;
        }
        else if (word[i] >= 'G' && word[i] <= 'I')
        {
            time += 5;
        }
        else if (word[i] >= 'J' && word[i] <= 'L')
        {
            time += 6;
        }
        else if (word[i] >= 'M' && word[i] <= 'O')
        {
            time += 7;
        }
        else if (word[i] >= 'P' && word[i] <= 'S')
        {
            time += 8;
        }
        else if (word[i] >= 'T' && word[i] <= 'V')
        {
            time += 9;
        }
        else
        {
            time += 10;
        }
    }

    std::cout << time << '\n';

    return 0;
}