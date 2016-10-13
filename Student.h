//#include <iostream>
#include <string>
//#include <fstream>
//#include <sstream>
//#include <cstddef>
#include <vector>


using namespace std;

//int jBis;

class Student
{
private:
    int id;
    string firstName, lastName, major, minor;
    vector<Course> coursesTaken;

public:
    Student *left;
    Student *right;
    Student *parent;
    Student(string first, string last, int idNum, string mainMajor, string secondMajor, vector<Course> ct, Student *parent);
    Student(){};
	~Student(){}
	int &getID(){return id;}
	string getFirst(){return firstName;}
	string getLast(){return lastName;}
	string getMajor(){return major;}
	string getMinor(){return minor;}
	vector<Course> getCt(){return coursesTaken;}
    //void StudentInit(string first, string last, int idNum, string mainMajor, string secondMajor, Courses classes[], int numOfClasses);
   // void OutputToFile();

};

Student::Student(string first, string last, int idNum, string mainMajor, string secondMajor, vector<Course> ct, Student *parent )
{
	this->firstName = first;
    this->lastName = last;
    this->id = idNum;
    this->major = mainMajor;
    this->minor = secondMajor;
	this->coursesTaken = ct;
	this->parent = parent;
	left = NULL;
	right = NULL;
	parent = NULL;

}

// Initialize all the variables with either the user input or dummy file
/*void Student::StudentInit(string first, string last, int idNum, string mainMajor, string secondMajor, Courses classes[], int numOfClasses)
{
    int i;

    firstName = first;
    lastName = last;
    id = idNum;
    major = mainMajor;
    minor = secondMajor;
    numberOfClasses = numOfClasses;

    for(i = 0; i < numberOfClasses; i++)
    {
        coursesTaken[i] = classes[i];
    }
}
*/
/*
// Creates and keep adding students profile to file according to the specified format
void Student::OutputToFile()
{
    ofstream myFile;
    myFile.open("StudentsFile.txt",  std::ofstream::out | std::ofstream::app);

    if(myFile.is_open())
    {
        int i;

        myFile << firstName << " " << lastName << "; " << id << "; " << major << "; " << minor << "; ";

        for(i = 0; i < numberOfClasses; i++)
            myFile << coursesTaken[i].course << ", ";

        myFile << "\n";

    }


}

// That function is only used when we get the input from a dummy file with a predefined format
void ParseLines(string line, Student profile[])
{
	// I will probably code get and sets function in the class to directly modify/get the correct variables, but I think it is easier (less code) for now
    int i, idNum, pos, delim;
    string first, last, mainMajor, secondMajor, idNumS;
    Courses cT[60];

    i = 0;

    pos = line.find_first_of(",");
    first = line.substr(0, pos);

    delim = pos + 1;
    pos = line.find_first_of(",", delim);
    last = line.substr(delim, pos - delim);

    delim = pos + 1;
    pos = line.find_first_of(",", delim);
    idNumS = line.substr(delim, pos - delim);
    stringstream ss(idNumS);
    ss >> idNum;

    delim = pos + 1;
    pos = line.find_first_of(",", delim);
    mainMajor = line.substr(delim, pos - delim);

    delim = pos + 1;
    pos = line.find_first_of(",", delim);
    secondMajor = line.substr(delim, pos - delim);

    while(pos != -1)
    {
        delim = pos + 1;
        pos = line.find_first_of(",", delim);
        cT[i].course = line.substr(delim, pos - delim);

        i++;

    }

    profile[jBis].StudentInit(first, last, idNum, mainMajor, secondMajor, cT, i);
    profile[jBis].OutputToFile();

    jBis++;

}


// Driver to test the effectiveness of the program while asking user for input or using a dummy file
int main()
{
	// I will probably code get and sets function in the class to directly modify/get the correct variables, but I think it is easier (less code) for now
    int i, j, idNum, numberCourses;
    string exit, first, last, mainMajor, secondMajor, lineBis;
    Courses cT[60];


    Student studentProfile[100];

	j = 0;
	exit = true;


// /*
    /////////// User input without using GUI functionalities ///////////////////////


    cout << "              #########     STUDENTS PROFILE     #########" << endl;
    cout << "\n";
    cout << "\n";

	while(exit.compare("No") != 0)
	{
		cout << "First Name:   ";
		cin >> first;

		cout << "Last Name:   ";
		cin >> last;

		cout << "Student ID Number:    ";
		cin >> idNum;

		cout << "Major:   ";
		cin >> mainMajor;

		cout << "Minor:   ";
		cin >> secondMajor;

		cout << "How many courses have you already taken?   ";
		cin >> numberCourses;

		while(i < numberCourses)
        {
            cout << "Name of Class Already Taken:   ";
            cin >> cT[i].course;
            i++;

        }

		studentProfile[j].StudentInit(first, last, idNum, mainMajor, secondMajor, cT, numberCourses);
		studentProfile[j].OutputToFile();

        cout << "\n";
		cout << "Add another profile? Yes/ No   ";
		cin >> exit;
		cout << "\n";

		j++;

	}




    //////////////////////////////////////////////
//*/

    ///////////////// Test using dummy file ///////////////
/*
    jBis = 0;

    ifstream myFile("dummyStudentsFile.txt");

    if(myFile.is_open())
    {
        cout << "Open file success !" << endl;

        while(myFile.eof() != true)
        {
            getline(myFile, lineBis);
            ParseLines(lineBis, studentProfile);
        }

        myFile.close();
    }

    else
        cout << "Could not open the file !" << endl;

	///////////////////////////////////////////////////////


    return 0;
}
	*/
