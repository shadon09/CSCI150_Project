#include <string>
#include <vector>
#include "course.h"
#include "Student.h"

using namespace std;

class Filter
{

	public:
	Filter();
    vector<Course> FilterByCourses(vector<Course> tT, vector<Course> aT);
    vector<Course> FilterByTime(vector<Course> tT, vector<Course> aT, int timeWished);
    vector<Course> FilterByDay(vector<Course> tT, vector<Course> aT, string dayWished);

};
