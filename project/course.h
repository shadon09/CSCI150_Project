#ifndef Course_h
#define Course_h

#include <string>
#include <vector>
#include <map>

class Course{
public:

    Course(std::string name, int id, std::vector<int> requirements, int tStart, int tEnd, std::string subject, std::map<std::string, bool> days);
    std::string getName();
    int getID();
    std::vector<int> getReq();
    std::string getSubject();
    int getStart();
    int getEnd();
    std::map<std::string, bool> getDays();
private:
    std::string name;
	int id, tStart, tEnd;
    std::vector<int> requirements;
    std::string subject;
    std::map<std::string, bool> days;
};
#endif 
