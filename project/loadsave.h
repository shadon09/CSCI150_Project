#ifndef Loadsave_h
#define Loadsave_h

#include <vector>
#include "course.h"
#include "Student.h"

//include -std=c++11 to compile 

class fileops{
	public:
    fileops(){}
	~fileops(){}
    void loadCourse(std::vector<Course> &table);
    void loadStudent(std::vector<Student> &table);
    void saveCourse(std::vector<Course> table);
    void loadCourse2(std::vector<Course> &table);
    void saveStudent(std::vector<Student> table);
}; 
#endif
