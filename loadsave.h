#include <vector>
#include <fstream>
#include "course.h"
#include "json.hpp"
#include "Student.h"
//include -std=c++11 to compile 
  
using json = nlohmann::json;
using namespace std;

struct fileops{
    fileops(){}
	~fileops(){}
	void loadCourse(vector<Course> &table);
	void loadStudent(vector<Student> &table);
	void saveCourse(vector<Course> table);
	void saveStudent(vector<Student> table);
}; 

///////////////////      Load and Save for Courses   ////////////////////
void fileops::loadCourse(vector<Course> &table){
	ifstream ifs;
	ifs.open("listCourses.json"); 
	json j;
	ifs >> j;
	for(int i = 0; i < j.size(); ++i){	
	Course temp(j[i]["name"],j[i]["id"], j[i]["requirements"],j[i]["subject"]);  
	table.push_back(temp);  
	}
	ifs.close();
}

void fileops::saveCourse(vector<Course> table){  
	ofstream ifs;
	ifs.open("listCourses.json");
	json dataArr;  
	
	for(int i =0; i < table.size(); i++){
		json temp; 
		temp["id"]             = table[i].getID();
		temp["name"]           = table[i].getName();
		temp["subject"]        = table[i].getSubject();
		temp["requirements"]   = table[i].getReq(); 
		dataArr.push_back(temp); 
}
	ifs << dataArr.dump(4);
ifs.close();
}
////////////////////////// Load and Save for Students ////////////////////

void fileops::loadStudent(vector<Student> &profiles){
	ifstream ifs; 
	ifs.open("listStudents.json");
	json j;
	ifs >> j;
	for(int i = 0; i < j.size(); i++){
	vector<Course> tp;
		for(int m = 0; m < j[i]["courses"].size(); m++){
		Course temp(j[i]["courses"][m]["name"],j[i]["courses"][m]["id"], j[i]["courses"][m]["requirements"],j[i]["courses"][m]["subject"]);
		tp.push_back(temp); 
		}
	Student temp(j[i]["first"],j[i]["last"],j[i]["id"],j[i]["major"],j[i]["minor"],tp);
	profiles.push_back(temp);
	}
	
	ifs.close();
}

void fileops::saveStudent(vector<Student> table){  
	ofstream ifs;
	ifs.open("listStudents.json");
	json dataArr;  
	
	for(int i =0; i < table.size(); i++){
		json temp; 
		temp["first"]    = table[i].getFirst(); 
		temp["last"]     = table[i].getLast(); 
		temp["id"]       = table[i].getID(); 
		temp["major"]    = table[i].getMajor();
		temp["minor"]    = table[i].getMinor();
		for(int j = 0; j < table[i].getCt().size(); j++){
			json tempv;
			tempv["name"]          = (table[i].getCt())[j].getName();
			tempv["subject"]       = (table[i].getCt())[j].getSubject();
			tempv["id"]            = (table[i].getCt())[j].getID();
			tempv["requirements"]  = (table[i].getCt())[j].getReq();
			temp["courses"].push_back(tempv);         
		}
		dataArr.push_back(temp); 
}

	ifs << dataArr.dump(4);
ifs.close();
}
