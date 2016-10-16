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
