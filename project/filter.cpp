#include "filter.h"
#include <iostream>
#include "course.h"


using namespace std;

Filter::Filter()
{

}

vector<Course> Filter::FilterByCourses(vector<Course> tT, vector<Course> aT)
{

    vector<Course>::iterator it, it2;
    int idTaken, idNew ;

    for(it = tT.begin(); it != tT.end(); it++)
    {

        idTaken = it->getID();

        for(it2 = aT.begin(); it2 != aT.end(); it2++)
        {
            idNew = it2->getID();

            if(idTaken == idNew)
                it2 = aT.erase(it2);

        }
    }

    return aT;


}

vector<Course>  Filter::FilterByTime(vector<Course> tT, vector<Course> aT, int timeWished)
{
    Filter ft;
    vector<Course> temp, nT;

    // I have to know which classes the student have to take and then filter them by time
    temp = ft.FilterByCourses(tT, aT);

    vector<Course>::iterator it;

    for(it = temp.begin(); it != temp.end(); it++)
    {
        if(it->getStart() != timeWished)
            it = temp.erase(it);
    }

    return nT;
}

vector<Course>  Filter::FilterByDay(vector<Course> tT, vector<Course> aT, string dayWished)
{
    Filter ft;
    vector<Course> temp, nT;
    map <string, bool> myMap;

    // I have to know which classes the student have to take and then filter them by day
    ft.FilterByCourses(tT, aT);

    vector<Course>::iterator it;
    map<string, bool>::iterator it2;

    for(it = temp.begin(); it != temp.end(); it++)
    {
        myMap = it->getDays();

        for(it2 = myMap.begin(); it2 != myMap.end(); it2++)
        {
            if(dayWished.compare(it2->first) == 0)
            {
                if(it2->second == false)
                {
                    //it2 = temp.erase(it2);
                    break;

                }
            }

        }
    }

    return nT;

}



