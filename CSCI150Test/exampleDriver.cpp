#include <iostream>
#include <vector>
#include "Student.h"
#include "loadsave.h"
#include "tree.h"

using namespace std;

int main(){

Tree *students = new Tree();
students->put(students->getRoot(), "Matthew", "Morado", 108, "Computer Science", "None",vector<Course>(),NULL);
students->put(students->getRoot(), "Memes", "AreDead", 90, "Computer Science", "None",vector<Course>(),NULL);
cout << students->getRoot()->getFirst();

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
