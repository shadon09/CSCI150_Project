//#include "filter.h"
#include <iostream>


using namespace std;

Filter::Filter()
{

}

void Filter::FilterByCourses(vector<Course> tT, vector<Course> aT, vector<Course> &nT)
{

    vector<Course>::iterator it, it2;
    int idTaken, idNew ;

    for(it = tT.begin(); it != tT.end(); it++)
    {
        idTaken = it->getID();

        for(it2 = aT.begin(); it2 != aT.end(); it2++)
        {
            idNew = it2->getID();

            if(idTaken != idNew)
                nT.push_back(*it2);
        }
    }


}

void Filter::FilterByTime(vector<Course> tT, vector<Course> aT, vector<Course> &nT, int timeWished)
{
    Filter ft;
    vector<Course> temp;

    // I have to know which classes the student have to take and then filter them by time
    ft.FilterByCourses(tT, aT, temp);

    vector<Course>::iterator it;

    for(it = temp.begin(); it != temp.end(); it++)
    {
        if(it->getStart() == timeWished)
            nT.push_back(*it);
    }

}

void Filter::FilterByDay(vector<Course> tT, vector<Course> aT, vector<Course> &nT, string dayWished)
{
    Filter ft;
    vector<Course> temp;
    map <string, bool> myMap;

    // I have to know which classes the student have to take and then filter them by day
    ft.FilterByCourses(tT, aT, temp);

    vector<Course>::iterator it;
    map<string, bool>::iterator it2;

    for(it = temp.begin(); it != temp.end(); it++)
    {
        myMap = it->getDays();

        for(it2 = myMap.begin(); it2 != myMap.end(); it2++)
        {
            if(dayWished.compare(it2->first) == 0 && it2->second == true)
                nT.push_back(*it);

        }
    }

}



