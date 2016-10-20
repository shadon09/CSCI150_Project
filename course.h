#include <string>
#include <vector>

using namespace std;
class Course{
public:
	Course(){
		name = "";
		id = -1;
		requirements = {};
		tStart = 0;
		tEnd = 0;
		subject = "none";
	};
	Course(string name, int id, vector<int> requirements, int tStart, int tEnd, string subject, map<string, bool> days){
		this->name = name;
		this->id = id;
		this->requirements = requirements;
		this->tStart = tStart;
		this->tEnd = tEnd;
		this->subject = subject;
		this->days = days;
	}
	~Course(){};
	string getName(){ return name; };
	int getID(){ return id; };
	vector<int> getReq(){ return requirements; };
	string getSubject(){ return subject; };
	int getStart(){return tStart;};
	int getEnd(){return tEnd;};
	map<string, bool> getDays(){return days; }
private:
	string name;
	int id, tStart, tEnd;
	vector<int> requirements;
	string subject;
	map<string, bool> days;
};
