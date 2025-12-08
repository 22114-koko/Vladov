#pragma once
#include <iostream>
using namespace std;

class Author
{
    private:

        string name{"Unknown"};
        int birthYear{1950};

    public:

        Author() = default;
        Author(string n, int by) : name(n), birthYear(by) {}


        string getName() const
        {
            return name;
        }

        int getBirthYear() const
        {
            return birthYear;
        }


        void setName(string n)
        {
            if (!n.empty())
            {
                name = n;
            } else
            {
                throw invalid_argument("Name cannot be empty.");
            }
        }

        void setBirthYear (int by)
        {
            if (by >= 1830 && by <= 2025)
            {
                birthYear = by;

            }else
            {
                throw invalid_argument("Birth year must be between 1830-2025.");
            }
        }


        string to_string() const
        {
            return name + " - " + std::to_string(birthYear);
        }
};
