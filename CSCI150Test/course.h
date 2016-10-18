#include <string>
#include <vector>

using namespace std;
class Course{
public:
	Course(){
		name = "";
		id = -1;
		requirements = {};
		subject = "none";
	};
	Course(string name, int id, vector<int> requirements, string subject){
		this->name = name;
		this->id = id;
		this->requirements = requirements;
		this->subject = subject;
	}
	~Course(){};
	string getName(){ return name; };
	int getID(){ return id; };
	vector<int> getReq(){ return requirements; };
	string getSubject(){ return subject; };

private:
	string name;
	int id;
	vector<int> requirements;
	string subject;
};
