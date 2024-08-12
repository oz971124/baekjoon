#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    // std::cout << std::fixed;
    // std::cout.precision(1);

    int sub_num;
    double score;
    double top_score;
    double average = 0;
    std::vector<double> array;

    std::cin >> sub_num;

    for (int i = 0; i < sub_num; i++)
    {
        std::cin >> score;

        array.push_back(score);
    }

    top_score = *std::max_element(array.begin(), array.end());
    

    for (double obj : array)
    {
        average += (obj / top_score) * 100;
        
    }

    average /= sub_num;

    std::cout << average << '\n';

    return 0;
}