#include "course.h"
#include "Student.h"

using namespace std;

Student::Student(string first, string last, int idNum, string mainMajor, string secondMajor, vector<Course> ct, string userName, string password )
{
	
	this->firstName = first;
    this->lastName = last;
    this->id = idNum;
    this->major = mainMajor;
    this->minor = secondMajor;
	this->coursesTaken = ct;
    this->userName = userName;
    this->password = password;

}

					Student::Student(){}
					Student::~Student(){}
    int 			Student::getID(){return id;}
	string 			Student::getFirst(){return firstName;}
	string 			Student::getLast(){return lastName;}
	string 			Student::getMajor(){return major;}
	string 			Student::getMinor(){return minor;}
	vector<Course>  Student::getCt(){return coursesTaken;}
    void            Student::setCt(Course temp) { coursesTaken.push_back(temp);}
    string Student::getUser(){return userName;}
    string Student::getPass(){return password;}
