#include <iostream>
#include"WorkHistory.h"
#include<string>
using namespace std;

int main()

{
WorkHistory obj1;
string company;
string location;
string position;
string description;
int timePeriodFrom;
int timeperiodTo;

cout<<"what is the name of the Company\n "<< company;
cin>>company;
obj1.setcompanyName(company);
company=obj1.getcompanyName();
cout<<"what was/is the location\n"<<location;
cin>>location;
obj1.setlocation(location);
location=obj1.getlocation();
cout<<"what was/is your position\n"<<position;
cin>>position;
obj1.setposition(position);
position=obj1.getposition();
cout<<"Please describe your work\n"<<description;
cin>>description;
obj1.setdescritpion(description);
description=obj1.getdescription();
cout<<"what date did you start working MMDDYYYY\n"<<timePeriodFrom;
cin>>timePeriodFrom;
obj1.settimePeriod(timePeriodFrom,timeperiodTo);
timePeriodFrom=obj1.gettimePeriodFrom();
cout<<"TO what date did you start working MMDDYYYY\n"<<timeperiodTo;
cin>>timeperiodTo;
obj1.settimePeriod(timePeriodFrom,timeperiodTo);
timePeriodFrom=obj1.gettimePeriodTo();{

}
cout <<"The name of the comapny is\n"<<company;
cout<<"the location of the company is\n"<<location;
cout<<"your job was to\n"<<position;
cout<<"the descritpion of your job is\n"<<description;
cout<<"you started on\n"<<timePeriodFrom;
cout<<"you finished on\n"<<timeperiodTo;




    return 0;
};
