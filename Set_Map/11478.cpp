#include <iostream>
#include <string>
#include <unordered_set>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string input;
    std::unordered_set<std::string> list;

    std::cin >> input;

    for (int word_length = 1; word_length <= input.size(); word_length++)
    {
        for (int start = 0; start < input.size(); start++)
        {
            list.insert(input.substr(start, word_length));
        }
    }

    std::cout << list.size() << '\n';
    
    return 0;
}