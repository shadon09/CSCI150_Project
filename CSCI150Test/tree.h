#include <iostream>
//#include "Student.h"
//#ifndef TREE_H
//#define TREE_H

class Tree{
public:
    Tree(){
        size = 0;
        root = NULL;
    };
    ~Tree(){};
    Student *put(Student *s, string first, string last, int idNum, string mainMajor, string secondMajor,vector<Course> ct, Student *parent);
    bool isBinaryTree(Student *s);
    void computeLeaf(Student *s, Student *p, int &count);
    Student *lookup(Student *s,int idNum);
    Student *findLevel(Student *s,int idNum);
    int computeNumericalResult(Student *s);
    bool isCompleteTree(Student *s);
    int treeHeight(Student *s);
    int exponent(int x, int y);
    char Max(Student *s);
    char Min(Student *s);
    Student *getRoot(){return root;};

private:
    int size;
    Student *root;
};

//#endif
