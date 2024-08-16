#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int count = 0;
    std::string input;
    std::vector<std::string> croatia_lang = {"c=", "c-", "d-", "lj", "nj", "s=", "z="};
    
    std::cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        std::string temp = input.substr(i, 3);

        if (temp == "dz=")
        {
            count++;
            i += 2;
        }
        else
        {
            temp = input.substr(i, 2);

            if (std::find(croatia_lang.begin(), croatia_lang.end(), temp) == croatia_lang.end())
            {
                count++;
            }
            else
            {
                count++;
                i++;
            }
        }
    }

    std::cout << count << '\n';

    return 0;
}