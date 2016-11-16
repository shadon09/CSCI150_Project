#ifndef Student_H
#define Student_H

#include <string>
#include <vector>
#include "course.h"

class Student
{
private:
    int id, numOfclasses;
   std::string firstName, lastName, major, minor, userName, password;
    std::vector<Course> coursesTaken;


public:

    Student(std::string first, std::string last, int idNum, std::string mainMajor, std::string secondMajor, std::vector<Course> ct, std::string userName, std::string password);
    Student();
    ~Student();
    int getID();
    std::string getFirst();
    std::string getLast();
    std::string getMajor();
    std::string getMinor();
    std::vector<Course> getCt();
    void setCt(Course temp);
    std::string getUser();
    std::string getPass();
};
#endif
