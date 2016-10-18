#include <iostream> 
#include <vector>
#include "loadsave.h"

using namespace std;

void printTree(Student *tree){
	if (tree == NULL)
		return; 
	printTree(tree->left);
	cout << tree->getFirst() << endl;
	cout << tree->getLast() << endl;
	cout << tree->getID() << endl;
	cout << tree->getMajor() << endl;
	cout << tree->getMinor() << endl;
	cout << tree->getCt().size() << endl << endl;
	printTree(tree->right);
}

int main(){

Tree *students = new Tree();
students->put(students->getRoot(), "Matthew", "Morado", 108, "Computer Science", "None",vector<Course>(),NULL);
students->put(students->getRoot(), "Memes", "AreDead", 90, "Computer Science", "None",vector<Course>(),NULL);
students->put(students->getRoot(), "I'm", "Saved", 201, "Computer Science", "None",vector<Course>(),NULL);
students->put(students->getRoot(), "Please", "Work", 91, "Computer Science", "None",vector<Course>(),NULL);
students->put(students->getRoot(), "The", "Best", 564, "Computer Science", "None",vector<Course>(),NULL);
cout << students->getRoot()->right->getFirst() << endl;
Student *look = students->Max(students->getRoot());
cout << look->getFirst() << endl;
fileops file;
file.loadStudentT(&students);
printTree(students->getRoot()); 
file.saveStudentT(students);



/*
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
*/

return 0;  
}
