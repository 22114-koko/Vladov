#pragma once
#include <iostream>
using namespace std;

class Member
{
    private:

        string name;
        string memberId;
        int yearJoined;

    public:

        Member() = default;
        Member(string n, string mId, int yJ) : name(n), memberId(mId), yearJoined(yJ) {}



        string getName() const
        {
            return name;
        }

        string getMemberId() const
        {
            return memberId;
        }

        int getYearJoined() const
        {
            return yearJoined;
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

        void setMemberId(string mId)
        {
            if (!mId.empty())
            {
                memberId = mId;
            } else
            {
                throw invalid_argument("Member Id cannot be empty.");
            }
        }

        void setYearJoined(int yJ)
        {
            if(yJ >= 1920 && yJ <= 2025){
                yearJoined = yJ;

            } else
            {
                throw invalid_argument("Year joined must be between 1920-2025.");
            }
        }


        string to_string() const
        {
            return name + " - " + memberId + " - " + std::to_string(yearJoined);
        }
};
