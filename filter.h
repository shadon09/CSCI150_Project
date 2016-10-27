#include <string>
#include <vector>
#include "course.h"
#include "Student.h"

using namespace std;

class Filter
{
	private:

	public:
	Filter();
	//void FilterByCourses(Student nameStd, vector<Course> aT);
	void FilterByCourses(vector<Course> tT, vector<Course> aT, vector<Course> &nT);
	void FilterByTime(vector<Course> tT, vector<Course> aT, vector<Course> &nT, int timeWished);
	void FilterByDay(vector<Course> tT, vector<Course> aT, vector<Course> &nT, string dayWished);

};
