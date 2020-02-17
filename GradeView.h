/* A class which represents a view of
*  any number of courses, intended to
*  hold the courses taken in multiple semesters.
*  The GradeView class gets comma seperated
*  data from a txt and uses the data to display
*  the courses' information. The information 
*  is expected to be formatted as follows: 

(course name), credits, hours, semester
item1, weight, grade1, grade2, grade3
item2, weight, grade1, grade2, grade3
...

*  Each course is newline seperated.
*   Using GradeView the user is able to add a course, 
*  edit an existing course, and delete a course. The
*  user gives the name of the course to specify
*  which course to edit.
*
*  Dependencies:
*  Item.h, Course.h, std::vector, std::string_view, std::iostream
*/
#include "Course.h"

#include <iostream>

class GradeView{

	private:
	std::string_view filepath;
	std::vector<std::vector<Course>>* allCourses;

	public:
	GradeView(std::string_view filepath);
	
	void parseCourses(filePath);
	Course* parseCourse();
	Item* parseItem();
}
