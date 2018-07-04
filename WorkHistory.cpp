#include "WorkHistory.h"
#include<string>
using namespace std;

WorkHistory::WorkHistory()
{
    companyName="";
    position="";
    location="";
    timePeriodFrom=0;
    timePeriodTo=0;
    description="";
}

string WorkHistory::getcompanyName()
{
    return companyName;
}
void WorkHistory::setcompanyName(string value)
{
companyName=value;
}
string WorkHistory::getposition()
{
return position;
}
void WorkHistory::setposition(string job)
    {
    position =job;
    }
string WorkHistory::getlocation()
{
return location;            
}
void WorkHistory::setlocation(string place)
{
 location=place;
}
int WorkHistory:: gettimePeriodFrom()
{
return timePeriodFrom;
}
int WorkHistory::gettimePeriodTo()
{
return timePeriodTo;

}
void WorkHistory::settimePeriod(int A, int B)
{
timePeriodFrom=A;
timePeriodTo=B;
}
string WorkHistory::getdescription(){

    return description;
}
void WorkHistory::setdescritpion(string ds)
{
description=ds;

}
