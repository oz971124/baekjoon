#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> dices;
    int answer;

    for (int i = 0; i < 3; i++)
    {
        int temp;
        std::cin >> temp;
        dices.push_back(temp);
    }

    sort(dices.begin(), dices.end());
    
    if (dices[0] == dices[2])
    {
        answer = 10000 + dices[0] * 1000;
    }
    else if (dices[0] == dices[1] || dices[1] == dices[2])
    {
        answer = 1000 + dices[1] * 100;
    }
    else
    {
        answer = dices[2] * 100;
    }

    std::cout << answer << std::endl;

    return 0;
}