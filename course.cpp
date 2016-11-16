#include "course.h"
using namespace std;

	Course::Course(string name, int id, vector<int> requirements, int tStart, int tEnd, string subject, map<string, bool> days){
		this->name = name;
		this->id = id;
		this->requirements = requirements;
		this->tStart = tStart;
		this->tEnd = tEnd;
		this->subject = subject;
		this->days = days;
	}

    string 				Course::getName(){ return name; }
    int                     Course::getID(){ return id; }
    vector<int> 		Course::getReq(){ return requirements; }
    string 				Course::getSubject(){ return subject; }
    int                    Course::getStart(){return tStart;}
    int                 	Course::getEnd(){return tEnd;}
	map<string, bool> 	Course::getDays(){return days; }
