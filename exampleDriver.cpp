#include <iostream> 
#include <vector>
#include "loadsave.h"

int main(){
vector<Course> table;
vector<Student> profiles;

fileops file; 
file.loadCourse(table); 
file.loadStudent(profiles);

cout << profiles[0].getFirst() << " " << profiles[0].getLast() << endl;
cout << profiles[0].getID() << endl;
cout << profiles[0].getMajor() << " " << profiles[0].getMinor() << endl;
cout <<  "Total Classes taken:" << profiles[0].getCt().size() << endl; 
cout << profiles[0].getCt()[0].getName()  << " " << profiles[0].getCt()[0].getSubject() << endl; 
return 0;  
}