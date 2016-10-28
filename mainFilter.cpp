#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include "filter.h"
#include "loadAndSave.h"


//using json = nlohmann::json;
using namespace std;

int main()
{

    ////////////////////// Test Filter using vectors of Courses /////////////////////////////
    vector<int> req;
    req.push_back(1);
    req.push_back(2);

    //map<string, bool> myMap = {{"Monday", true}, {"Tuesday", false}, {"Wednesday", true}, {"Thursday", false}, {"Friday", false}};
    //map<string, bool> myMap2 = {{"Monday", false}, {"Tuesday", true}, {"Wednesday", false}, {"Thursday", true}, {"Friday", false}};
    //map<string, bool> myMap3 = {{"Monday", true}, {"Tuesday", false}, {"Wednesday", true}, {"Thursday", false}, {"Friday", true}};

    map<string, bool> myMap, myMap2, myMap3;
    myMap["Monday"] = true;
    myMap["Tuesday"] = false;
    myMap["Wednesday"] = true;
    myMap["Thursday"] = false;
    myMap["Friday"] = false;

    myMap2["Monday"] = true;
    myMap2["Tuesday"] = false;
    myMap2["Wednesday"] = true;
    myMap2["Thursday"] = false;
    myMap2["Friday"] = true;

    myMap3["Monday"] = false;
    myMap3["Tuesday"] = true;
    myMap3["Wednesday"] = false;
    myMap3["Thursday"] = true;
    myMap3["Friday"] = false;



    Course testCr("CSCI99", 123, req, 8, 9, "Artificial Intelligence", myMap);
    Course testCr1("CSCI25", 456, req, 10, 11, "Software Engineering", myMap2);
    Course testCr2("CSCI98", 789, req, 8, 9, "Neural Networking", myMap3);
    Course testCr3("CSCI10", 012, req, 8, 9, "Cognitive Behavior", myMap2);

    vector<Course> testCt, allCt, finalCt, finalCt2, finalCt3;
    testCt.push_back(testCr);
    allCt.push_back(testCr1);
    allCt.push_back(testCr2);
    allCt.push_back(testCr3);


    ////////////////////// Test filter by Course /////////////////////////////
    Filter ft;
    ft.FilterByCourses(testCt, allCt, finalCt);

    vector<Course>::iterator it3, it4, it5;

    for(it3 = finalCt.begin(); it3 != finalCt.end(); it3++)
        cout << it3->getName() << ": " << it3->getSubject() << endl;

    ////////////////////////////////////////////////////////////////////////


    ////////////////////// Test filter by Time /////////////////////////////
    ft.FilterByTime(testCt, allCt, finalCt2, 8);

    for(it4 = finalCt2.begin(); it4 != finalCt2.end(); it4++)
        cout << it4->getSubject() << " at: " << it4->getStart() << endl;

    ////////////////////////////////////////////////////////////////////////


    ////////////////////// Test filter by Day /////////////////////////////

    ft.FilterByDay(testCt, allCt, finalCt3, "Monday");
    map<string, bool> testMap;
    map<string, bool>::iterator mapit;

    for(it5 = finalCt3.begin(); it5 != finalCt3.end(); it5++)
    {
        testMap = it5->getDays();

        cout << it5->getSubject() << " on: ";
        for(mapit = testMap.begin(); mapit != testMap.end(); mapit++)
        {
            if(mapit->second == true)
                cout << mapit->first << ", ";
        }

        cout << "\n";
    }




    ////////////////////////////////////////////////////////////////////////


    return 0;
}
