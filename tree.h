#include <iostream>
//#include "tree.cpp"
#ifndef TREE_H
#define TREE_H

class Tree{
public:
    Tree(){
        size = 0;
        root = NULL;
    };
    ~Tree(){};
    Student *put(Student *s, string first, string last, int idNum, string mainMajor, string secondMajor,vector<Course> ct, Student *parent){	
    //If there is no root make one
    if(root == NULL){
        root = new Student(first,last,idNum,mainMajor,secondMajor,ct,NULL);
        return s;
    }
    //After going through tree the recursive way insert node at firs empty spot it comes across
    if(s == NULL){
        return new Student(first,last,idNum,mainMajor,secondMajor,ct,parent);
    }
    //compares keys to make sure node go in at the right order
    if(idNum < s->getID())
        s->left = put(s->left, first, last, idNum, mainMajor, secondMajor, ct, s);
    else if(idNum > s->getID())
        s->right = put(s->right,first, last, idNum, mainMajor, secondMajor, ct, s);
    //If equal, overwrite node with no information
    else{
        s->getFirst() = first;
        s->getLast() = last;
	s->getID() = idNum;
	s->getMajor() = mainMajor;
	s->getMinor() = secondMajor;
	s->getCt() = ct;
    }
    //return the node
    return s;
};
    	//bool isBinaryTree(Student *s);
    	//void computeLeaf(Student *s, Student *p, int &count);
    Student *lookup(Student *s,int idNum){

    	//if comes across a dead end
    	if(s == NULL)
        	return NULL;
    	//return the counted variable as level identifier
    	if(s->getID() == idNum)
        	return s;
    	//use recursion to find the node on the left side
    	Student *level = findLevel(s->left,idNum);
    	if(level != NULL)
        	return level;
    	//use recursion to find the node on the right side
    	Student *level2 = findLevel(s->right,idNum);
    	//if node was found on both, check when the node came earlier
    	if(level->getID() <= level2->getID())
        	return level2;
    	else return level;
    };
    Student *findLevel(Student *s,int idNum){

    	return findLevel(s,idNum);
    };
    //int computeNumericalResult(Student *s);
    //bool isCompleteTree(Student *s);
    //int treeHeight(Student *s);
    //int exponent(int x, int y);
    //char Max(Student *s);
    //char Min(Student *s);
    Student *getRoot(){return root;};

private:
    int size;
    Student *root;
};

#endif
