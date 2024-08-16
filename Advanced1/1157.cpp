#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool compare1(std::pair<int, char> a, std::pair<int, char> b) {

	return a.first > b.first;
}

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string input;
    std::vector<std::pair<int, char> > dic;

    std::cin >> input;
    
    for (int i = 0; i < input.size(); i++)
    {
        char ch;

        input[i] = std::toupper(input[i]);
        ch = input[i];

        auto it = std::find_if(dic.begin(), dic.end(),
            [&ch](const std::pair<int, char>& element) { return element.second == ch; });

        if (it == dic.end())
        {
            dic.push_back(std::make_pair(1, ch));
        }
        else
        {
            it->first++;
        }
    }

    std::sort(dic.begin(), dic.end(), compare1);

    if (dic[0].first == dic[1].first)
    {
        std::cout << '?' << '\n';
    }
    else
    {
        std::cout << std::max_element(dic.begin(), dic.end())->second << '\n'; 
    }
    
    return 0;
}