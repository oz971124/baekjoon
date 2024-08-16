#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout << std::fixed;
    std::cout.precision(6);

    double avg_score = 0;
    double credit_sum = 0;
    double credit;

    std::string input;
    std::string temp;
    std::vector<std::string> sub_credit_grade;

    for (int i = 0; i < 20; i++)
    {
        std::getline(std::cin, input);
        sub_credit_grade.push_back(input);
    }

    for (std::string info : sub_credit_grade)
    {
        std::stringstream ss(info);

        for (int i = 0; i < 3; i++)
        {
            ss >> temp;

            if (i == 1)
            {
                credit = std::stod(temp);
                
            }
            else if (i == 2)
            {
                if (temp == "P")
                {
                    continue;   
                }
                else
                {
                    credit_sum += credit;
                }
                
                if (temp == "A+")
                {
                    avg_score += (4.5 * credit);
                }
                else if (temp == "A0")
                {
                    avg_score += (4.0 * credit);
                }
                else if (temp == "B+")
                {
                    avg_score += (3.5 * credit);
                }
                else if (temp == "B0")
                {
                    avg_score += (3.0 * credit);
                }
                else if (temp == "C+")
                {
                    avg_score += (2.5 * credit);
                }
                else if (temp == "C0")
                {
                    avg_score += (2.0 * credit);
                }
                else if (temp == "D+")
                {
                    avg_score += (1.5 * credit);
                }
                else if (temp == "D0")
                {
                    avg_score += (1.0 * credit);
                }
                else if (temp == "F")
                {
                    avg_score += (0.0 * credit);
                }
            }
        }
    }

    avg_score /= credit_sum;

        std::cout << avg_score << '\n';

    return 0;
}