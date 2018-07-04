#ifndef WORKHISTORY_H
#define WORKHISTORY_H
#include<string>
using namespace std;


class WorkHistory
{
    private:
    string companyName;
    string position;
    string location;
    int timePeriodFrom;
    int timePeriodTo;
    string description;

    public:
        WorkHistory();
        string getcompanyName();
        void setcompanyName(string value);
        string getposition();
        void setposition(string job);
        string getlocation();
        void setlocation(string place);
        int gettimePeriodFrom();
        int gettimePeriodTo();
        void settimePeriod(int A, int B);
        string getdescription();
        void setdescritpion(string ds);
       


    
};

#endif // WORKHISTORY_H
