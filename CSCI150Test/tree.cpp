#include "tree.h"
#include <ctype.h>
#include <iostream>
using namespace std;

//Here is where we add nodes
Student *Tree::put(Student *s, string first, string last, int idNum, string mainMajor, string secondMajor, vector<Course> ct, Student *parent){
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
        *s->getLeft() = *put(s->getLeft(), first, last, idNum, mainMajor, secondMajor, ct, s);
    else if(idNum > s->getID())
        *s->getRight() = *put(s->getRight(),first, last, idNum, mainMajor, secondMajor, ct, s);
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

}

//For LookUP
Student *Tree::findLevel(Student *s,int idNum){
    //if comes across a dead end
    if(s == NULL)
        return NULL;
    //return the counted variable as level identifier
    if(s->getID() == idNum)
        return s;
    //use recursion to find the node on the left side
    Student *level = findLevel(s->getLeft(),idNum);
    if(level != NULL)
        return level;
    //use recursion to find the node on the right side
    Student *level2 = findLevel(s->getRight(),idNum);
    //if node was found on both, check when the node came earlier
    if(level->getID() <= level2->getID())
        return level2;
    else return level;
}
//implement the findLevel function
Student *Tree::lookup(Student *s,int idNum){
    return findLevel(s,idNum);
}
/*
//Find nodes with characters using reference variable count
void Tree::computeLeaf(Student *s, Student *p, int& count){
    if(s != NULL){
        //check ascii values to equal lowercase letters
        if(s->value >= 97 && s->value <= 121)
            count++;
        //To check left nodes
        computeLeaf(s->left,s,count);
        //to check right nodes
        computeLeaf(s->right,s,count);

    }
}

//Check if you can compute the tree and if so, return value
int Tree::computeNumericalResult(Student *s){
    //checks if there is an operator
    if(s->value == '+' || s->value == '-' || s->value == '*' || s->value == '/' ){
        //checks if there are numerical values and then checks which one to return a value
        if(s->left->num != NULL && s->right != NULL){
            if(s->value == '+')
                return s->left->num + s->right->num;
            if(s->value == '-')
                return s->left->num - s->right->num;
            if(s->value == '*')
                return s->left->num * s->right->num;
            if(s->value == '/')
                return s->left->num / s->right->num;
        }
    }
}

Student *Tree::getRoot(){
    Student *s = root;
    return s;
}

//check if out tree is an actual tree
bool Tree::isBinaryTree(tNode *s){
    //Trees with nothing are trees
    if(s == NULL){
        return true;
    }
    //checks if there are is nothing on the left greater than the current Node
    if(s->left != NULL && Max(s->left)>s->key){
        return false;
    }
    //checks if there are is nothing on the right less than the current Node
    if(s->right != NULL && Min(s->right)<s->key){
        return false;
    }
    //Traverses whole tree and recheck all subtrees
    if(!isBinaryTree(s->left) || !isBinaryTree(s->right)){
        return false;
    }
    //if everything passes return true
    return true;
}

//For Finding complete tree
//Finding the height of the tree
int Tree::treeHeight(tNode *s){
    //if starting node is nothing
    if(s==NULL)
        return -1;
    //find height of left of s
    int left = treeHeight(s->left);
    //find height of right of s
    int right = treeHeight(s->right);
    //which side is longer?
    if(left > right)
        return (left +1);
    else return (right +1);
}

//For Finding complete tree
//Compute exponent
int Tree::exponent(int x, int y){
    int power = 1;
    for(int i=0;i<y;i++)
        power *= x;
    return power;
}

bool Tree::isCompleteTree(tNode *s){
    //if nothing and its a tree
    if(s==NULL)
        return true;
    //get the height
    int height = treeHeight(s);
    //get the size
    int N=size;
    //see if the size of the nodes equal 2 to the height power
    //means if there are no lonely nodes, then its true. else false
    if(N == exponent(2,height)-1)
        return true;
    else
        return false;
}*/
